/*

    File: file_dir.c

    Copyright (C) 1998-2007 Christophe GRENIER <grenier@cgsecurity.org>
  
    This software is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
  
    You should have received a copy of the GNU General Public License along
    with this program; if not, write the Free Software Foundation, Inc., 51
    Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#ifdef HAVE_TIME_H
#include <time.h>
#endif
#include <stdio.h>
#include "types.h"
#include "filegen.h"
#include "common.h"
#include "fat.h"
#include "dir.h"
#include "fat_dir.h"

static void register_header_check_dir(file_stat_t *file_stat);
static int header_check_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new);

const file_hint_t file_hint_dir= {
  .extension="fat",
  .description="FAT subdirectory",
  .min_header_distance=0,
  .max_filesize=PHOTOREC_MAX_FILE_SIZE,
  .recover=0,
  .enable_by_default=1,
  .register_header_check=&register_header_check_dir
};

static const unsigned char *dir_header=(const unsigned char *)".          ";

static void file_rename_fatdir(const char *old_filename)
{
  unsigned char buffer[512];
  unsigned char buffer_cluster[32];
  FILE *file;
  int buffer_size;
  unsigned int cluster;
  if((file=fopen(old_filename, "rb"))==NULL)
    return;
  buffer_size=fread(buffer, 1, sizeof(buffer), file);
  fclose(file);
  if(buffer_size<10)
    return;
  cluster=(buffer[0x15]<<24)|(buffer[0x14]<<16)|(buffer[0x1B]<<8)|buffer[0x1A];
  sprintf(buffer_cluster, "cluster_%u", cluster);
  file_rename(old_filename, buffer_cluster, strlen(buffer_cluster), 0, NULL, 1);
}

static int data_check_fatdir(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
{
  /* Save only one cluster */
  file_recovery->calculated_file_size=buffer_size/2;
  return 2;
}

static int header_check_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
{
  const struct msdos_dir_entry *de=(const struct msdos_dir_entry*)buffer;
  if(memcmp(&buffer[0x20],"..         ",8+3)!=0)
    return 0;
  reset_file_recovery(file_recovery_new);
  file_recovery_new->extension=file_hint_dir.extension;
  file_recovery_new->data_check=&data_check_fatdir;
  file_recovery_new->file_check=&file_check_size;
  file_recovery_new->file_rename=&file_rename_fatdir;
  file_recovery_new->time=date_dos2unix(le16(de->time),le16(de->date));
  return 1;
}

static void register_header_check_dir(file_stat_t *file_stat)
{
  register_header_check(0, ".          ", 8+3, &header_check_dir, file_stat);
}
