```
$ make
make  all-recursive
make[1]: Entering directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska'
Making all in icons
make[2]: Entering directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/icons'
make[2]: Nothing to be done for 'all'.
make[2]: Leaving directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/icons'
Making all in man
make[2]: Entering directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/man'
Making all in zh_CN
make[3]: Entering directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/man/zh_CN'
make[3]: Nothing to be done for 'all'.
make[3]: Leaving directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/man/zh_CN'
make[3]: Entering directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/man'
make[3]: Nothing to be done for 'all-am'.
make[3]: Leaving directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/man'
make[2]: Leaving directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/man'
Making all in src
make[2]: Entering directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/src'
  CC       autoset.o
  CC       common.o
In file included from common.c:29:
common.c: In function ‘strip_dup’:
common.c:215:17: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  215 |   while(isspace(*str))
      |                 ^~~~
common.c:219:22: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  219 |     if (!isspace (str[i]))
      |                   ~~~^~~
  CC       crc.o
  CC       ewf.o
  CC       fnctdsk.o
  CC       hdaccess.o
hdaccess.c: In function ‘disk_get_sector_size’:
hdaccess.c:570:12: warning: cast from function call of type ‘long int’ to non-matching type ‘void *’ [-Wbad-function-cast]
  570 |     handle=(HANDLE)get_osfhandle(hd_h);
      |            ^
hdaccess.c: In function ‘disk_get_geometry’:
hdaccess.c:715:12: warning: cast from function call of type ‘long int’ to non-matching type ‘void *’ [-Wbad-function-cast]
  715 |     handle=(HANDLE)get_osfhandle(hd_h);
      |            ^
hdaccess.c: In function ‘disk_get_size’:
hdaccess.c:818:12: warning: cast from function call of type ‘long int’ to non-matching type ‘void *’ [-Wbad-function-cast]
  818 |     handle=(HANDLE)get_osfhandle(hd_h);
      |            ^
hdaccess.c: In function ‘disk_get_model’:
hdaccess.c:1064:12: warning: cast from function call of type ‘long int’ to non-matching type ‘void *’ [-Wbad-function-cast]
 1064 |     handle=(HANDLE)get_osfhandle(hd_h);
      |            ^
hdaccess.c: In function ‘file_pread_aux’:
hdaccess.c:1202:19: warning: cast from function call of type ‘long int’ to non-matching type ‘void *’ [-Wbad-function-cast]
 1202 |     HANDLE handle=(HANDLE)get_osfhandle(fd);
      |                   ^
hdaccess.c: In function ‘file_nopwrite’:
hdaccess.c:1346:56: warning: unused parameter ‘buf’ [-Wunused-parameter]
 1346 | static int file_nopwrite(disk_t *disk_car, const void *buf, const unsigned int count, const uint64_t offset)
      |                                            ~~~~~~~~~~~~^~~
At top level:
hdaccess.c:212:21: warning: ‘hd_glob_parse’ defined but not used [-Wunused-function]
  212 | static list_disk_t *hd_glob_parse(const char *device_pattern, list_disk_t *list_disk, const int verbose, const int testdisk_mode)
      |                     ^~~~~~~~~~~~~
  CC       hdcache.o
  CC       hdwin32.o
  CC       hidden.o
  CC       hpa_dco.o
hpa_dco.c: In function ‘disk_get_hpa_dco’:
hpa_dco.c:349:33: warning: unused parameter ‘fd’ [-Wunused-parameter]
  349 | void disk_get_hpa_dco(const int fd, disk_t *disk)
      |                       ~~~~~~~~~~^~
hpa_dco.c:349:45: warning: unused parameter ‘disk’ [-Wunused-parameter]
  349 | void disk_get_hpa_dco(const int fd, disk_t *disk)
      |                                     ~~~~~~~~^~~~
  CC       intrf.o
  CC       iso.o
  CC       list_sort.o
  CC       log.o
  CC       log_part.o
  CC       misc.o
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c: In function ‘get_os’:
misc.c:85:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
   85 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 95 or NT 4.0 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                               |
      |                                                                               DWORD {aka unsigned int}
misc.c:85:71: note: format string is defined here
   85 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 95 or NT 4.0 (%lu)", Ver.dwBuildNumber);
      |                                                                     ~~^
      |                                                                       |
      |                                                                       long unsigned int
      |                                                                     %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:95:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
   95 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 98 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                     |
      |                                                                     DWORD {aka unsigned int}
misc.c:95:61: note: format string is defined here
   95 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 98 (%lu)", Ver.dwBuildNumber);
      |                                                           ~~^
      |                                                             |
      |                                                             long unsigned int
      |                                                           %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:102:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  102 |         snprintf(buffer, sizeof(buffer) - 1, "Windows ME (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                     |
      |                                                                     DWORD {aka unsigned int}
misc.c:102:61: note: format string is defined here
  102 |         snprintf(buffer, sizeof(buffer) - 1, "Windows ME (%lu)", Ver.dwBuildNumber);
      |                                                           ~~^
      |                                                             |
      |                                                             long unsigned int
      |                                                           %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:109:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  109 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 2000 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                       |
      |                                                                       DWORD {aka unsigned int}
misc.c:109:63: note: format string is defined here
  109 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 2000 (%lu)", Ver.dwBuildNumber);
      |                                                             ~~^
      |                                                               |
      |                                                               long unsigned int
      |                                                             %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:127:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  127 |         snprintf(buffer, sizeof(buffer) - 1, "Windows XP (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                     |
      |                                                                     DWORD {aka unsigned int}
misc.c:127:61: note: format string is defined here
  127 |         snprintf(buffer, sizeof(buffer) - 1, "Windows XP (%lu)", Ver.dwBuildNumber);
      |                                                           ~~^
      |                                                             |
      |                                                             long unsigned int
      |                                                           %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:131:44: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  131 |       snprintf(buffer, sizeof(buffer) - 1, "Windows 2003 (%lu)", Ver.dwBuildNumber);
      |                                            ^~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                     |
      |                                                                     DWORD {aka unsigned int}
misc.c:131:61: note: format string is defined here
  131 |       snprintf(buffer, sizeof(buffer) - 1, "Windows 2003 (%lu)", Ver.dwBuildNumber);
      |                                                           ~~^
      |                                                             |
      |                                                             long unsigned int
      |                                                           %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:136:47: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  136 |          snprintf(buffer, sizeof(buffer) - 1, "Windows Vista (%lu)", Ver.dwBuildNumber);
      |                                               ^~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                         |
      |                                                                         DWORD {aka unsigned int}
misc.c:136:65: note: format string is defined here
  136 |          snprintf(buffer, sizeof(buffer) - 1, "Windows Vista (%lu)", Ver.dwBuildNumber);
      |                                                               ~~^
      |                                                                 |
      |                                                                 long unsigned int
      |                                                               %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:138:47: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  138 |          snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2008 (%lu)", Ver.dwBuildNumber);
      |                                               ^~~~~~~~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                               |
      |                                                                               DWORD {aka unsigned int}
misc.c:138:71: note: format string is defined here
  138 |          snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2008 (%lu)", Ver.dwBuildNumber);
      |                                                                     ~~^
      |                                                                       |
      |                                                                       long unsigned int
      |                                                                     %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:143:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  143 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 7 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                    |
      |                                                                    DWORD {aka unsigned int}
misc.c:143:60: note: format string is defined here
  143 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 7 (%lu)", Ver.dwBuildNumber);
      |                                                          ~~^
      |                                                            |
      |                                                            long unsigned int
      |                                                          %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:145:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  145 |         snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2008 R2 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                                 |
      |                                                                                 DWORD {aka unsigned int}
misc.c:145:73: note: format string is defined here
  145 |         snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2008 R2 (%lu)", Ver.dwBuildNumber);
      |                                                                       ~~^
      |                                                                         |
      |                                                                         long unsigned int
      |                                                                       %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:150:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  150 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 8 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                    |
      |                                                                    DWORD {aka unsigned int}
misc.c:150:60: note: format string is defined here
  150 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 8 (%lu)", Ver.dwBuildNumber);
      |                                                          ~~^
      |                                                            |
      |                                                            long unsigned int
      |                                                          %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:152:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  152 |         snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2012 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                              |
      |                                                                              DWORD {aka unsigned int}
misc.c:152:70: note: format string is defined here
  152 |         snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2012 (%lu)", Ver.dwBuildNumber);
      |                                                                    ~~^
      |                                                                      |
      |                                                                      long unsigned int
      |                                                                    %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:157:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  157 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 8.1 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                      |
      |                                                                      DWORD {aka unsigned int}
misc.c:157:62: note: format string is defined here
  157 |         snprintf(buffer, sizeof(buffer) - 1, "Windows 8.1 (%lu)", Ver.dwBuildNumber);
      |                                                            ~~^
      |                                                              |
      |                                                              long unsigned int
      |                                                            %u
In file included from /usr/include/stdio.h:806,
                 from misc.c:30:
misc.c:159:46: warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 6 has type ‘DWORD’ {aka ‘unsigned int’} [-Wformat=]
  159 |         snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2012 R2 (%lu)", Ver.dwBuildNumber);
      |                                              ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  ~~~~~~~~~~~~~~~~~
      |                                                                                 |
      |                                                                                 DWORD {aka unsigned int}
misc.c:159:73: note: format string is defined here
  159 |         snprintf(buffer, sizeof(buffer) - 1, "Windows Server 2012 R2 (%lu)", Ver.dwBuildNumber);
      |                                                                       ~~^
      |                                                                         |
      |                                                                         long unsigned int
      |                                                                       %u
  CC       msdos.o
  CC       parti386.o
parti386.c: In function ‘init_part_order_i386’:
parti386.c:329:56: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  329 | static list_part_t *init_part_order_i386(const disk_t *disk_car, list_part_t *list_part)
      |                                          ~~~~~~~~~~~~~~^~~~~~~~
  CC       partgpt.o
partgpt.c: In function ‘init_part_order_gpt’:
partgpt.c:327:55: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  327 | static list_part_t *init_part_order_gpt(const disk_t *disk_car, list_part_t *list_part)
      |                                         ~~~~~~~~~~~~~~^~~~~~~~
partgpt.c: In function ‘set_next_status_gpt’:
partgpt.c:400:47: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  400 | static void set_next_status_gpt(const disk_t *disk_car, partition_t *partition)
      |                                 ~~~~~~~~~~~~~~^~~~~~~~
partgpt.c: In function ‘init_structure_gpt’:
partgpt.c:423:89: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  423 | static void init_structure_gpt(const disk_t *disk_car,list_part_t *list_part, const int verbose)
      |                                                                               ~~~~~~~~~~^~~~~~~
  CC       parthumax.o
parthumax.c: In function ‘read_part_humax’:
parthumax.c:109:65: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  109 | static list_part_t *read_part_humax(disk_t *disk_car, const int verbose, const int saveheader)
      |                                                       ~~~~~~~~~~^~~~~~~
parthumax.c:109:84: warning: unused parameter ‘saveheader’ [-Wunused-parameter]
  109 | static list_part_t *read_part_humax(disk_t *disk_car, const int verbose, const int saveheader)
      |                                                                          ~~~~~~~~~~^~~~~~~~~~
parthumax.c: In function ‘write_part_humax’:
parthumax.c:159:37: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  159 | static int write_part_humax(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                             ~~~~~~~~^~~~~~~~
parthumax.c:159:66: warning: unused parameter ‘list_part’ [-Wunused-parameter]
  159 | static int write_part_humax(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
parthumax.c:159:101: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  159 | static int write_part_humax(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                                                                           ~~~~~~~~~~^~~~~~~
parthumax.c: In function ‘init_part_order_humax’:
parthumax.c:167:57: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  167 | static list_part_t *init_part_order_humax(const disk_t *disk_car, list_part_t *list_part)
      |                                           ~~~~~~~~~~~~~~^~~~~~~~
parthumax.c: In function ‘set_next_status_humax’:
parthumax.c:235:49: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  235 | static void set_next_status_humax(const disk_t *disk_car, partition_t *partition)
      |                                   ~~~~~~~~~~~~~~^~~~~~~~
parthumax.c: In function ‘init_structure_humax’:
parthumax.c:271:91: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  271 | static void init_structure_humax(const disk_t *disk_car,list_part_t *list_part, const int verbose)
      |                                                                                 ~~~~~~~~~~^~~~~~~
parthumax.c: In function ‘get_partition_typename_humax’:
parthumax.c:305:68: warning: unused parameter ‘partition’ [-Wunused-parameter]
  305 | static const char *get_partition_typename_humax(const partition_t *partition)
      |                                                 ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
  CC       partmac.o
partmac.c: In function ‘write_part_mac’:
partmac.c:200:35: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  200 | static int write_part_mac(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                           ~~~~~~~~^~~~~~~~
partmac.c:200:64: warning: unused parameter ‘list_part’ [-Wunused-parameter]
  200 | static int write_part_mac(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
partmac.c:200:99: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  200 | static int write_part_mac(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                                                                         ~~~~~~~~~~^~~~~~~
partmac.c: In function ‘init_part_order_mac’:
partmac.c:208:55: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  208 | static list_part_t *init_part_order_mac(const disk_t *disk_car, list_part_t *list_part)
      |                                         ~~~~~~~~~~~~~~^~~~~~~~
partmac.c: In function ‘set_next_status_mac’:
partmac.c:272:47: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  272 | static void set_next_status_mac(const disk_t *disk_car, partition_t *partition)
      |                                 ~~~~~~~~~~~~~~^~~~~~~~
partmac.c: In function ‘init_structure_mac’:
partmac.c:305:89: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  305 | static void init_structure_mac(const disk_t *disk_car,list_part_t *list_part, const int verbose)
      |                                                                               ~~~~~~~~~~^~~~~~~
In file included from partmac.c:38:
partmac.c: In function ‘read_part_mac’:
partmac.c:133:17: warning: array subscript ‘mac_DPME {aka struct dpme}[0]’ is partly outside array bounds of ‘unsigned char[512]’ [-Warray-bounds]
  133 |     if(be16(dpme->dpme_signature) != DPME_SIGNATURE)
      |                 ^~
common.h:458:22: note: in definition of macro ‘be16’
  458 | #define be16(x)  ((((x)&0xff00)>>8)                      | \
      |                      ^
partmac.c:112:17: note: while referencing ‘buffer’
  112 |   unsigned char buffer[DEFAULT_SECTOR_SIZE];
      |                 ^~~~~~
In file included from partmac.c:38:
partmac.c:183:53: warning: array subscript ‘mac_DPME {aka struct dpme}[0]’ is partly outside array bounds of ‘unsigned char[512]’ [-Warray-bounds]
  183 |       new_partition->part_offset=(uint64_t)be32(dpme->dpme_pblock_start)*PBLOCK_SIZE;
      |                                                     ^~
common.h:462:22: note: in definition of macro ‘be32’
  462 | #define be32(x)  ((((x)&0xff000000UL)>>24)                | \
      |                      ^
partmac.c:112:17: note: while referencing ‘buffer’
  112 |   unsigned char buffer[DEFAULT_SECTOR_SIZE];
      |                 ^~~~~~
In file included from partmac.c:38:
partmac.c:184:51: warning: array subscript ‘mac_DPME {aka struct dpme}[0]’ is partly outside array bounds of ‘unsigned char[512]’ [-Warray-bounds]
  184 |       new_partition->part_size=(uint64_t)be32(dpme->dpme_pblocks)*PBLOCK_SIZE;
      |                                                   ^~
common.h:462:22: note: in definition of macro ‘be32’
  462 | #define be32(x)  ((((x)&0xff000000UL)>>24)                | \
      |                      ^
partmac.c:112:17: note: while referencing ‘buffer’
  112 |   unsigned char buffer[DEFAULT_SECTOR_SIZE];
      |                 ^~~~~~
In file included from partmac.c:38:
partmac.c:193:24: warning: array subscript ‘mac_DPME {aka struct dpme}[0]’ is partly outside array bounds of ‘unsigned char[512]’ [-Warray-bounds]
  193 |         limit=be32(dpme->dpme_map_entries);
      |                        ^~
common.h:462:22: note: in definition of macro ‘be32’
  462 | #define be32(x)  ((((x)&0xff000000UL)>>24)                | \
      |                      ^
partmac.c:112:17: note: while referencing ‘buffer’
  112 |   unsigned char buffer[DEFAULT_SECTOR_SIZE];
      |                 ^~~~~~
  CC       partsun.o
partsun.c: In function ‘write_part_sun’:
partsun.c:178:35: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  178 | static int write_part_sun(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                           ~~~~~~~~^~~~~~~~
partsun.c:178:64: warning: unused parameter ‘list_part’ [-Wunused-parameter]
  178 | static int write_part_sun(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
partsun.c:178:99: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  178 | static int write_part_sun(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                                                                         ~~~~~~~~~~^~~~~~~
partsun.c: In function ‘set_next_status_sun’:
partsun.c:269:47: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  269 | static void set_next_status_sun(const disk_t *disk_car, partition_t *partition)
      |                                 ~~~~~~~~~~~~~~^~~~~~~~
partsun.c: In function ‘init_structure_sun’:
partsun.c:301:89: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  301 | static void init_structure_sun(const disk_t *disk_car,list_part_t *list_part, const int verbose)
      |                                                                               ~~~~~~~~~~^~~~~~~
  CC       partnone.o
partnone.c: In function ‘get_geometry_from_nonembr’:
partnone.c:176:77: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  176 | static int get_geometry_from_nonembr(const unsigned char *buffer, const int verbose, CHSgeometry_t *geometry)
      |                                                                   ~~~~~~~~~~^~~~~~~
partnone.c: In function ‘init_part_order_none’:
partnone.c:306:56: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  306 | static list_part_t *init_part_order_none(const disk_t *disk_car, list_part_t *list_part)
      |                                          ~~~~~~~~~~~~~~^~~~~~~~
partnone.c: In function ‘set_next_status_none’:
partnone.c:312:48: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  312 | static void set_next_status_none(const disk_t *disk_car, partition_t *partition)
      |                                  ~~~~~~~~~~~~~~^~~~~~~~
partnone.c:312:71: warning: unused parameter ‘partition’ [-Wunused-parameter]
  312 | static void set_next_status_none(const disk_t *disk_car, partition_t *partition)
      |                                                          ~~~~~~~~~~~~~^~~~~~~~~
partnone.c: In function ‘test_structure_none’:
partnone.c:316:45: warning: unused parameter ‘list_part’ [-Wunused-parameter]
  316 | static int test_structure_none(list_part_t *list_part)
      |                                ~~~~~~~~~~~~~^~~~~~~~~
partnone.c: In function ‘is_part_known_none’:
partnone.c:327:50: warning: unused parameter ‘partition’ [-Wunused-parameter]
  327 | static int is_part_known_none(const partition_t *partition)
      |                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
partnone.c: In function ‘init_structure_none’:
partnone.c:332:47: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  332 | static void init_structure_none(const disk_t *disk_car,list_part_t *list_part, const int verbose)
      |                                 ~~~~~~~~~~~~~~^~~~~~~~
partnone.c:332:90: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  332 | static void init_structure_none(const disk_t *disk_car,list_part_t *list_part, const int verbose)
      |                                                                                ~~~~~~~~~~^~~~~~~
partnone.c: In function ‘check_part_none’:
partnone.c:341:97: warning: unused parameter ‘saveheader’ [-Wunused-parameter]
  341 | static int check_part_none(disk_t *disk_car,const int verbose,partition_t *partition, const int saveheader)
      |                                                                                       ~~~~~~~~~~^~~~~~~~~~
  CC       partxbox.o
partxbox.c: In function ‘write_part_xbox’:
partxbox.c:135:36: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  135 | static int write_part_xbox(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                            ~~~~~~~~^~~~~~~~
partxbox.c:135:65: warning: unused parameter ‘list_part’ [-Wunused-parameter]
  135 | static int write_part_xbox(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
partxbox.c:135:100: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  135 | static int write_part_xbox(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                                                                          ~~~~~~~~~~^~~~~~~
partxbox.c: In function ‘init_part_order_xbox’:
partxbox.c:143:56: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  143 | static list_part_t *init_part_order_xbox(const disk_t *disk_car, list_part_t *list_part)
      |                                          ~~~~~~~~~~~~~~^~~~~~~~
partxbox.c: In function ‘set_next_status_xbox’:
partxbox.c:207:48: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  207 | static void set_next_status_xbox(const disk_t *disk_car, partition_t *partition)
      |                                  ~~~~~~~~~~~~~~^~~~~~~~
partxbox.c: In function ‘init_structure_xbox’:
partxbox.c:240:90: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  240 | static void init_structure_xbox(const disk_t *disk_car,list_part_t *list_part, const int verbose)
      |                                                                                ~~~~~~~~~~^~~~~~~
  CC       io_redir.o
  CC       ntfs_io.o
  CC       ntfs_utl.o
  CC       partauto.o
  CC       sudo.o
  CC       unicode.o
  CC       win32.o
win32.c: In function ‘disk_get_sector_size_win32’:
win32.c:69:68: warning: unused parameter ‘device’ [-Wunused-parameter]
   69 | unsigned int disk_get_sector_size_win32(HANDLE handle, const char *device, const int verbose)
      |                                                        ~~~~~~~~~~~~^~~~~~
win32.c:69:86: warning: unused parameter ‘verbose’ [-Wunused-parameter]
   69 | unsigned int disk_get_sector_size_win32(HANDLE handle, const char *device, const int verbose)
      |                                                                            ~~~~~~~~~~^~~~~~~
In file included from win32.c:50:
win32.c: In function ‘file_win32_pread_aux’:
win32.c:446:77: warning: cast from pointer to integer of different size [-Wpointer-to-int-cast]
  446 |     log_error("file_win32_pread(%d,%u,buffer,%lu(%u/%u/%u)) seek err %s\n", (int)fd,
      |                                                                             ^
log.h:60:79: note: in definition of macro ‘log_error’
   60 | #define log_error(FORMAT, ARGS...)      log_redirect(LOG_LEVEL_ERROR,FORMAT,##ARGS)
      |                                                                               ^~~~
win32.c:463:76: warning: cast from pointer to integer of different size [-Wpointer-to-int-cast]
  463 |       log_error("file_win32_pread(%d,%u,buffer,%lu(%u/%u/%u)) read err: ", (int)fd,
      |                                                                            ^
log.h:60:79: note: in definition of macro ‘log_error’
   60 | #define log_error(FORMAT, ARGS...)      log_redirect(LOG_LEVEL_ERROR,FORMAT,##ARGS)
      |                                                                               ^~~~
win32.c: In function ‘file_win32_pwrite_aux’:
win32.c:516:78: warning: cast from pointer to integer of different size [-Wpointer-to-int-cast]
  516 |     log_error("file_win32_pwrite(%d,%u,buffer,%lu(%u/%u/%u)) seek err %s\n", (int)fd,
      |                                                                              ^
log.h:60:79: note: in definition of macro ‘log_error’
   60 | #define log_error(FORMAT, ARGS...)      log_redirect(LOG_LEVEL_ERROR,FORMAT,##ARGS)
      |                                                                               ^~~~
win32.c:532:76: warning: cast from pointer to integer of different size [-Wpointer-to-int-cast]
  532 |     log_error("file_win32_pwrite(%u,%u,buffer,%lu(%u/%u/%u)) write err\n", (int)fd,
      |                                                                            ^
log.h:60:79: note: in definition of macro ‘log_error’
   60 | #define log_error(FORMAT, ARGS...)      log_redirect(LOG_LEVEL_ERROR,FORMAT,##ARGS)
      |                                                                               ^~~~
win32.c: In function ‘file_win32_nopwrite’:
win32.c:547:82: warning: cast from pointer to integer of different size [-Wpointer-to-int-cast]
  547 |   log_warning("file_win32_nopwrite(%d,%u,buffer,%lu(%u/%u/%u)) write refused\n", (unsigned int)data->handle,
      |                                                                                  ^
log.h:59:81: note: in definition of macro ‘log_warning’
   59 | #define log_warning(FORMAT, ARGS...)    log_redirect(LOG_LEVEL_WARNING,FORMAT,##ARGS)
      |                                                                                 ^~~~
win32.c:544:62: warning: unused parameter ‘buf’ [-Wunused-parameter]
  544 | static int file_win32_nopwrite(disk_t *disk_car, const void *buf, const unsigned int count,  const uint64_t offset)
      |                                                  ~~~~~~~~~~~~^~~
  CC       analyse.o
  CC       bfs.o
  CC       bsd.o
  CC       btrfs.o
  CC       cramfs.o
  CC       exfat.o
  CC       ext2.o
  CC       ext2_common.o
  CC       fat.o
  CC       fat_common.o
  CC       fatx.o
  CC       f2fs.o
f2fs.c: In function ‘recover_f2fs’:
f2fs.c:90:32: warning: unused parameter ‘disk’ [-Wunused-parameter]
   90 | int recover_f2fs(const disk_t *disk, const struct f2fs_super_block *hdr, partition_t *partition)
      |                  ~~~~~~~~~~~~~~^~~~
  CC       jfs.o
  CC       gfs2.o
  CC       hfs.o
  CC       hfsp.o
  CC       hpfs.o
  CC       luks.o
  CC       lvm.o
  CC       md.o
  CC       netware.o
  CC       ntfs.o
ntfs.c: In function ‘ntfs_searchattribute’:
ntfs.c:204:25: warning: comparison of integer expressions of different signedness: ‘uint32_t’ {aka ‘unsigned int’} and ‘int’ [-Wsign-compare]
  204 |       le32(attrib->type)!= -1)
      |                         ^~
  CC       refs.o
  CC       rfs.o
  CC       savehdr.o
  CC       sun.o
  CC       swap.o
  CC       sysv.o
  CC       ufs.o
  CC       vmfs.o
  CC       wbfs.o
  CC       xfs.o
  CC       zfs.o
  CC       addpart.o
  CC       addpartn.o
  CC       adv.o
In file included from adv.c:36:
adv.c: In function ‘adv_string_to_command’:
adv.c:251:21: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  251 |     else if(isdigit(*current_cmd[0]))
      |                     ^~~~~~~~~~~~~~~
  CC       askloc.o
askloc.c: In function ‘ask_location’:
askloc.c:314:9: warning: format not a string literal, argument types not checked [-Wformat-nonliteral]
  314 |         line_directory=aff_txt(2, window, msg, src_dir);
      |         ^~~~~~~~~~~~~~
  CC       chgarch.o
  CC       chgarchn.o
  CC       chgtype.o
  CC       chgtypen.o
  CC       dimage.o
  CC       dirn.o
  CC       dirpart.o
  CC       diskacc.o
  CC       diskcapa.o
  CC       edit.o
  CC       ext2_sb.o
  CC       ext2_sbn.o
  CC       fat1x.o
  CC       fat32.o
  CC       fat_adv.o
fat_adv.c: In function ‘file2entry’:
fat_adv.c:626:44: warning: taking address of packed member of ‘struct msdos_dir_entry’ may result in an unaligned pointer value [-Waddress-of-packed-member]
  626 |   fat_date_unix2dos(current_file->td_mtime,&de->time,&de->date);
      |                                            ^~~~~~~~~
fat_adv.c:626:54: warning: taking address of packed member of ‘struct msdos_dir_entry’ may result in an unaligned pointer value [-Waddress-of-packed-member]
  626 |   fat_date_unix2dos(current_file->td_mtime,&de->time,&de->date);
      |                                                      ^~~~~~~~~
  CC       fat_cluster.o
  CC       fatn.o
  CC       geometry.o
  CC       geometryn.o
  CC       godmode.o
godmode.c: In function ‘search_part’:
godmode.c:605:44: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 3 has type ‘long unsigned int’ [-Wformat=]
  605 |         wprintw(stdscr,"Analyse cylinder %5u/%u: %02u%%",
      |                                          ~~^
      |                                            |
      |                                            unsigned int
      |                                          %5lu
  606 |             start.cylinder, disk_car->geom.cylinders-1,
      |             ~~~~~~~~~~~~~~
      |                  |
      |                  long unsigned int
godmode.c:605:47: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 4 has type ‘long unsigned int’ [-Wformat=]
  605 |         wprintw(stdscr,"Analyse cylinder %5u/%u: %02u%%",
      |                                              ~^
      |                                               |
      |                                               unsigned int
      |                                              %lu
  606 |             start.cylinder, disk_car->geom.cylinders-1,
      |                             ~~~~~~~~~~~~~~~~~~~~~~~~~~
      |                                                     |
      |                                                     long unsigned int
In file included from godmode.c:35:
lang.h:24:27: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 3 has type ‘long unsigned int’ [-Wformat=]
   24 | #define msg_READ_ERROR_AT "Read error at %u/%u/%u (lba=%lu)\n"
      |                           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
lang.h:24:27: note: in definition of macro ‘msg_READ_ERROR_AT’
   24 | #define msg_READ_ERROR_AT "Read error at %u/%u/%u (lba=%lu)\n"
      |                           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
lang.h:24:43: note: format string is defined here
   24 | #define msg_READ_ERROR_AT "Read error at %u/%u/%u (lba=%lu)\n"
      |                                          ~^
      |                                           |
      |                                           unsigned int
      |                                          %lu
  CC       hiddenn.o
  CC       intrface.o
  CC       intrfn.o
  CC       nodisk.o
  CC       ntfs_adv.o
ntfs_adv.c: In function ‘create_ntfs_boot_sector’:
ntfs_adv.c:271:40: warning: operand of ‘?:’ changes signedness from ‘int’ to ‘uint32_t’ {aka ‘unsigned int’} due to unsignedness of other operand [-Wsign-compare]
  271 |       mft_record_size / cluster_size : -(testdisk_ffs(mft_record_size) - 1));
      |                                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ntfs_adv.c:273:41: warning: operand of ‘?:’ changes signedness from ‘int’ to ‘uint32_t’ {aka ‘unsigned int’} due to unsignedness of other operand [-Wsign-compare]
  273 |       index_block_size / cluster_size : -(testdisk_ffs(index_block_size) - 1));
      |                                         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  CC       ntfs_fix.o
  CC       ntfs_udl.o
ntfs_udl.c: In function ‘ntfs_undelete_part’:
ntfs_udl.c:1705:82: warning: unused parameter ‘verbose’ [-Wunused-parameter]
 1705 | int ntfs_undelete_part(disk_t *disk_car, const partition_t *partition, const int verbose, char **current_cmd)
      |                                                                        ~~~~~~~~~~^~~~~~~
  CC       parti386n.o
  CC       partgptn.o
  CC       partmacn.o
  CC       partsunn.o
  CC       partxboxn.o
  CC       tanalyse.o
  CC       tbanner.o
  CC       tdelete.o
  CC       tdiskop.o
  CC       tdisksel.o
  CC       testdisk.o
  CC       texfat.o
  CC       thfs.o
  CC       tload.o
  CC       tlog.o
  CC       tmbrcode.o
  CC       tntfs.o
  CC       toptions.o
  CC       tpartwr.o
  CC       dir.o
dir.c: In function ‘set_mode’:
dir.c:471:26: warning: unused parameter ‘pathname’ [-Wunused-parameter]
  471 | int set_mode(const char *pathname, unsigned int mode)
      |              ~~~~~~~~~~~~^~~~~~~~
dir.c:471:49: warning: unused parameter ‘mode’ [-Wunused-parameter]
  471 | int set_mode(const char *pathname, unsigned int mode)
      |                                    ~~~~~~~~~~~~~^~~~
At top level:
dir.c:449:15: warning: ‘mode_xlate’ defined but not used [-Wunused-function]
  449 | static mode_t mode_xlate(unsigned int lmode)
      |               ^~~~~~~~~~
  CC       exfat_dir.o
exfat_dir.c: In function ‘dir_exfat_aux’:
exfat_dir.c:135:34: warning: unused variable ‘ls’ [-Wunused-variable]
  135 |   const struct exfat_dir_struct *ls=(const struct exfat_dir_struct*)dir_data->private_dir_data;
      |                                  ^~
  CC       ext2_dir.o
ext2_dir.c: In function ‘dir_partition_ext2_init’:
ext2_dir.c:355:49: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  355 | dir_partition_t dir_partition_ext2_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                         ~~~~~~~~^~~~~~~~
ext2_dir.c:355:78: warning: unused parameter ‘partition’ [-Wunused-parameter]
  355 | dir_partition_t dir_partition_ext2_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
ext2_dir.c:355:101: warning: unused parameter ‘dir_data’ [-Wunused-parameter]
  355 | dir_partition_t dir_partition_ext2_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                                                                         ~~~~~~~~~~~~^~~~~~~~
ext2_dir.c:355:121: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  355 | dir_partition_t dir_partition_ext2_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                                                                                               ~~~~~~~~~~^~~~~~~
  CC       fat_dir.o
fat_dir.c: In function ‘dir_fat_aux’:
fat_dir.c:102:24: warning: converting a packed ‘const struct msdos_dir_entry’ pointer (alignment 1) to a ‘const struct msdos_dir_slot’ pointer (alignment 2) may result in an unaligned pointer value [-Waddress-of-packed-member]
  102 |     ds = (const struct msdos_dir_slot *) de;
      |                        ^~~~~~~~~~~~~~
fat_dir.c:109:26: warning: converting a packed ‘const struct msdos_dir_entry’ pointer (alignment 1) to a ‘const struct msdos_dir_slot’ pointer (alignment 2) may result in an unaligned pointer value [-Waddress-of-packed-member]
  109 |       ds = (const struct msdos_dir_slot *) de;
      |                          ^~~~~~~~~~~~~~
fat_dir.c:126:26: warning: converting a packed ‘const struct msdos_dir_entry’ pointer (alignment 1) to a ‘const struct msdos_dir_slot’ pointer (alignment 2) may result in an unaligned pointer value [-Waddress-of-packed-member]
  126 |       ds = (const struct msdos_dir_slot *) de_initial;
      |                          ^~~~~~~~~~~~~~
fat_dir.c:160:24: warning: converting a packed ‘const struct msdos_dir_entry’ pointer (alignment 1) to a ‘const struct msdos_dir_slot’ pointer (alignment 2) may result in an unaligned pointer value [-Waddress-of-packed-member]
  160 |     ds = (const struct msdos_dir_slot *) de;
      |                        ^~~~~~~~~~~~~~
fat_dir.c:191:28: warning: converting a packed ‘const struct msdos_dir_entry’ pointer (alignment 1) to a ‘const struct msdos_dir_slot’ pointer (alignment 2) may result in an unaligned pointer value [-Waddress-of-packed-member]
  191 |         ds = (const struct msdos_dir_slot *) de;
      |                            ^~~~~~~~~~~~~~
  CC       ntfs_dir.o
ntfs_dir.c: In function ‘dir_partition_ntfs_init’:
ntfs_dir.c:464:49: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  464 | dir_partition_t dir_partition_ntfs_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose, const int expert)
      |                                         ~~~~~~~~^~~~~~~~
ntfs_dir.c:464:78: warning: unused parameter ‘partition’ [-Wunused-parameter]
  464 | dir_partition_t dir_partition_ntfs_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose, const int expert)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
ntfs_dir.c:464:101: warning: unused parameter ‘dir_data’ [-Wunused-parameter]
  464 | dir_partition_t dir_partition_ntfs_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose, const int expert)
      |                                                                                         ~~~~~~~~~~~~^~~~~~~~
ntfs_dir.c:464:121: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  464 | dir_partition_t dir_partition_ntfs_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose, const int expert)
      |                                                                                                               ~~~~~~~~~~^~~~~~~
ntfs_dir.c:464:140: warning: unused parameter ‘expert’ [-Wunused-parameter]
  464 | dir_partition_t dir_partition_ntfs_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose, const int expert)
      |                                                                                                                                  ~~~~~~~~~~^~~~~~
  CC       partgptw.o
partgptw.c: In function ‘write_part_gpt’:
partgptw.c:244:87: warning: comparison of integer expressions of different signedness: ‘int’ and ‘unsigned int’ [-Wsign-compare]
  244 |   if(disk_car->pread(disk_car, gpt_org, disk_car->sector_size, disk_car->sector_size) == disk_car->sector_size)
      |                                                                                       ^~
partgptw.c:219:92: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  219 | int write_part_gpt(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                                                                  ~~~~~~~~~~^~~~~~~
  CC       rfs_dir.o
rfs_dir.c: In function ‘dir_partition_reiser_init’:
rfs_dir.c:548:51: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
  548 | dir_partition_t dir_partition_reiser_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                           ~~~~~~~~^~~~~~~~
rfs_dir.c:548:80: warning: unused parameter ‘partition’ [-Wunused-parameter]
  548 | dir_partition_t dir_partition_reiser_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
rfs_dir.c:548:103: warning: unused parameter ‘dir_data’ [-Wunused-parameter]
  548 | dir_partition_t dir_partition_reiser_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                                                                           ~~~~~~~~~~~~^~~~~~~~
rfs_dir.c:548:123: warning: unused parameter ‘verbose’ [-Wunused-parameter]
  548 | dir_partition_t dir_partition_reiser_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose)
      |                                                                                                                 ~~~~~~~~~~^~~~~~~
  CC       setdate.o
/usr/bin/windres --include-dir . icon_tst.rc icon_tst.o
  CC       next.o
  CCLD     testdisk.exe
  CC       phmain.o
  CC       photorec.o
photorec.c: In function ‘set_search_start’:
photorec.c:744:20: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  744 |   if(params->offset!=-1)
      |                    ^~
  CC       phcfg.o
  CC       exfatp.o
  CC       ext2grp.o
  CC       ext2p.o
  CC       fatp.o
  CC       file_found.o
  CC       ntfsp.o
  CC       pdisksel.o
  CC       phcli.o
In file included from phcli.c:33:
phcli.c: In function ‘menu_photorec_cli’:
phcli.c:241:36: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  241 |     else if(isdigit(params->cmd_run[0]))
      |                     ~~~~~~~~~~~~~~~^~~
  CC       poptions.o
  CC       sessionp.o
sessionp.c: In function ‘session_save’:
sessionp.c:291:60: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  291 |     if(params->status!=STATUS_FIND_OFFSET && params->offset!=-1)
      |                                                            ^~
  CC       dfxml.o
  CC       fat_unformat.o
  CC       pbanner.o
  CC       pblocksize.o
  CC       pdiskseln.o
  CC       pfree_whole.o
  CC       phbf.o
  CC       phbs.o
  CC       phnc.o
  CC       phrecn.o
  CC       ppartseln.o
  CC       psearchn.o
  CC       filegen.o
filegen.c: In function ‘data_check_size’:
filegen.c:282:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  282 | data_check_t data_check_size(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
In file included from filegen.c:33:
filegen.c: In function ‘file_rename’:
filegen.c:432:22: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  432 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                      ^~~~
filegen.c:432:40: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  432 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                                        ^~~~
filegen.c:432:58: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  432 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                                                          ^~~~
filegen.c:432:76: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  432 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                                                                            ^~~~
filegen.c: In function ‘file_rename_unicode’:
filegen.c:545:22: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  545 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                      ^~~~
filegen.c:545:40: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  545 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                                        ^~~~
filegen.c:545:58: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  545 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                                                          ^~~~
filegen.c:545:76: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  545 |           if(isprint(*src) && !isspace(*src) && !ispunct(*src) && !iscntrl(*src))
      |                                                                            ^~~~
  CC       file_list.o
  CC       file_1cd.o
file_1cd.c: In function ‘header_check_1cd’:
file_1cd.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_1cd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_1cd.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_1cd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_1cd.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_1cd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_3dm.o
file_3dm.c: In function ‘header_check_3dm’:
file_3dm.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_3dm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_3dm.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_3dm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_7z.o
file_7z.c: In function ‘header_check_7z’:
file_7z.c:55:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_7z(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery,  file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_7z.c:55:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_7z(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery,  file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_7z.c:55:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_7z(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery,  file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_DB.o
file_DB.c: In function ‘header_check_DB’:
file_DB.c:43:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   43 | static int header_check_DB(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_DB.c:43:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   43 | static int header_check_DB(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_DB.c:43:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_DB(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_DB.c:43:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_DB(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_a.o
file_a.c: In function ‘header_check_a’:
file_a.c:55:75: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_a(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only,  const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                        ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_a.c:55:107: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_a(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only,  const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                        ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_a.c:55:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_a(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only,  const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ab.o
file_ab.c: In function ‘header_check_addressbook’:
file_ab.c:71:85: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   71 | static int header_check_addressbook(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                  ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ab.c:71:117: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   71 | static int header_check_addressbook(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                  ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ab.c:71:158: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   71 | static int header_check_addressbook(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                       ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_abr.o
file_abr.c: In function ‘header_check_abr’:
file_abr.c:66:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   66 | static int header_check_abr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_abr.c:66:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   66 | static int header_check_abr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_acb.o
file_acb.c: In function ‘header_check_acb’:
file_acb.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_acb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_acb.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_acb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_acb.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_acb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_acb.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_acb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ace.o
file_ace.c: In function ‘header_check_ace’:
file_ace.c:173:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  173 | static int header_check_ace(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ace.c:173:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  173 | static int header_check_ace(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ace.c:173:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  173 | static int header_check_ace(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ado.o
file_ado.c: In function ‘header_check_ado’:
file_ado.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_ado(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ado.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_ado(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ado.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_ado(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_afdesign.o
file_afdesign.c: In function ‘header_check_afdesign’:
file_afdesign.c:63:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   63 | static int header_check_afdesign(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_afdesign.c:63:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   63 | static int header_check_afdesign(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_afdesign.c:63:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   63 | static int header_check_afdesign(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ahn.o
file_ahn.c: In function ‘header_check_ahn’:
file_ahn.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_ahn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ahn.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_ahn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ahn.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_ahn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_aif.o
file_aif.c: In function ‘header_check_aif’:
file_aif.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_aif(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_aif.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_aif(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_aif.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_aif(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_all.o
file_all.c: In function ‘header_check_all’:
file_all.c:45:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_all(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_all.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_all(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_all.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_all(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_all.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_all(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_als.o
file_als.c: In function ‘header_check_als’:
file_als.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_als(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_als.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_als(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_als.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_als(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_amd.o
file_amd.c: In function ‘header_check_amd’:
file_amd.c:47:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_amd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_amd.c:47:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_amd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_amd.c:47:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_amd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_amd.c: In function ‘header_check_amt’:
file_amd.c:58:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   58 | static int header_check_amt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_amd.c:58:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   58 | static int header_check_amt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_amd.c:58:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   58 | static int header_check_amt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_amr.o
file_amr.c: In function ‘header_check_amr’:
file_amr.c:74:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   74 | static int header_check_amr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_amr.c:74:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   74 | static int header_check_amr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_amr.c:74:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   74 | static int header_check_amr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_apa.o
file_apa.c: In function ‘header_check_apa’:
file_apa.c:55:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_apa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_apa.c:55:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_apa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_apa.c:55:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_apa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ape.o
file_ape.c: In function ‘header_check_ape’:
file_ape.c:102:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  102 | static int header_check_ape(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ape.c:102:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  102 | static int header_check_ape(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_apple.o
file_apple.c: In function ‘header_check_apple’:
file_apple.c:43:52: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   43 | static int header_check_apple(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                               ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_apple.c:43:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   43 | static int header_check_apple(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_apple.c:43:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_apple(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_apple.c:43:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_apple(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ari.o
file_ari.c: In function ‘header_check_ari’:
file_ari.c:57:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   57 | static int header_check_ari(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ari.c:57:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   57 | static int header_check_ari(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ari.c:57:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   57 | static int header_check_ari(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_arj.o
file_arj.c: In function ‘header_check_arj’:
file_arj.c:125:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  125 | static int header_check_arj(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_arj.c:125:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  125 | static int header_check_arj(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_arj.c:125:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  125 | static int header_check_arj(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_asf.o
file_asf.c: In function ‘header_check_asf’:
file_asf.c:69:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   69 | static int header_check_asf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_asf.c:69:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   69 | static int header_check_asf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_asl.o
file_asl.c: In function ‘header_check_asl’:
file_asl.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_asl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_asl.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_asl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_asl.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_asl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_asl.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_asl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_asm.o
file_asm.c: In function ‘header_check_asm’:
file_asm.c:57:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   57 | static int header_check_asm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_asm.c:57:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   57 | static int header_check_asm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_asm.c:57:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   57 | static int header_check_asm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_atd.o
file_atd.c: In function ‘header_check_atd’:
file_atd.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_atd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_atd.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_atd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_atd.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_atd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_atd.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_atd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_au.o
file_au.c: In function ‘header_check_au’:
file_au.c:56:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   56 | static int header_check_au(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_au.c:56:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   56 | static int header_check_au(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_au.c:56:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   56 | static int header_check_au(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_axp.o
file_axp.c: In function ‘header_check_axp’:
file_axp.c:68:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   68 | static int header_check_axp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_axp.c:68:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   68 | static int header_check_axp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_axp.c:68:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   68 | static int header_check_axp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_axp.c:68:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   68 | static int header_check_axp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_axx.o
file_axx.c: In function ‘header_check_axx’:
file_axx.c:85:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   85 | static int header_check_axx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_axx.c:85:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   85 | static int header_check_axx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_axx.c:85:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   85 | static int header_check_axx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bac.o
file_bac.c: In function ‘header_check_bac’:
file_bac.c:92:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   92 | static int header_check_bac(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bac.c:92:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   92 | static int header_check_bac(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bac.c:92:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   92 | static int header_check_bac(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bdm.o
file_bdm.c: In function ‘header_check_bdm’:
file_bdm.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_bdm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_bdm.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_bdm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bdm.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_bdm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bdm.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_bdm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_berkeley.o
file_berkeley.c: In function ‘header_check_berkeley_le’:
file_berkeley.c:44:58: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_berkeley_le(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                     ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_berkeley.c:44:85: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_berkeley_le(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                  ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_berkeley.c:44:117: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_berkeley_le(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                  ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_berkeley.c:44:158: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_berkeley_le(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                       ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bim.o
file_bim.c: In function ‘header_check_bim’:
file_bim.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_bim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_bim.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_bim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bim.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_bim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bim.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_bim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bin.o
file_bin.c: In function ‘header_check_bin’:
file_bin.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_bin(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bin.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_bin(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bin.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_bin(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_binvox.o
file_binvox.c: In function ‘header_check_binvox’:
file_binvox.c:44:53: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_binvox(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_binvox.c:44:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_binvox(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_binvox.c:44:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_binvox(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_binvox.c:44:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_binvox(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bkf.o
file_bkf.c: In function ‘header_check_bkf’:
file_bkf.c:71:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   71 | static int header_check_bkf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bkf.c:71:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   71 | static int header_check_bkf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bkf.c:71:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   71 | static int header_check_bkf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bld.o
file_bld.c: In function ‘header_check_blend’:
file_bld.c:140:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  140 | static int header_check_blend(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bld.c:140:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  140 | static int header_check_blend(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bld.c:140:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  140 | static int header_check_blend(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bmp.o
file_bmp.c: In function ‘header_check_bmp’:
file_bmp.c:61:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_bmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bmp.c:61:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_bmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bmp.c:61:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_bmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bpg.o
file_bpg.c: In function ‘header_check_bpg’:
file_bpg.c:69:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   69 | static int header_check_bpg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bpg.c:69:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   69 | static int header_check_bpg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_bvr.o
file_bvr.c: In function ‘header_check_bvr’:
file_bvr.c:60:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   60 | static int header_check_bvr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_bvr.c:60:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   60 | static int header_check_bvr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bvr.c:60:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   60 | static int header_check_bvr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_bz2.o
file_bz2.c: In function ‘header_check_bz2’:
file_bz2.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_bz2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_bz2.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_bz2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_bz2.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_bz2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_c4d.o
file_c4d.c: In function ‘header_check_c4d’:
file_c4d.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_c4d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_c4d.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_c4d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_c4d.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_c4d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_c4d.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_c4d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_cab.o
file_cab.c: In function ‘header_check_cab’:
file_cab.c:60:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   60 | static int header_check_cab(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cab.c:60:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   60 | static int header_check_cab(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cab.c:60:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   60 | static int header_check_cab(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_caf.o
file_caf.c: In function ‘header_check_caf’:
file_caf.c:97:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   97 | static int header_check_caf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_caf.c:97:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   97 | static int header_check_caf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_caf.c:97:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   97 | static int header_check_caf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_cam.o
file_cam.c: In function ‘header_check_cam’:
file_cam.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_cam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_cam.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_cam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cam.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_cam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cam.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_cam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_catdrawing.o
file_catdrawing.c: In function ‘header_check_catdrawing’:
file_catdrawing.c:44:57: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_catdrawing(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                    ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_catdrawing.c:44:84: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_catdrawing(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                 ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_catdrawing.c:44:116: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_catdrawing(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                 ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_catdrawing.c:44:157: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_catdrawing(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                      ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_cdt.o
file_cdt.c: In function ‘header_check_cdt’:
file_cdt.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_cdt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cdt.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_cdt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cdt.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_cdt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_che.o
file_che.c: In function ‘header_check_che’:
file_che.c:87:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   87 | static int header_check_che(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_che.c:87:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   87 | static int header_check_che(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_che.c:87:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   87 | static int header_check_che(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_che.c:87:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   87 | static int header_check_che(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_chm.o
file_chm.c: In function ‘header_check_chm’:
file_chm.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_chm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_chm.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_chm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_chm.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_chm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_class.o
file_class.c: In function ‘header_check_class’:
file_class.c:61:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_class(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_class.c:61:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_class(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_class.c:61:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_class(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_cm.o
file_cm.c: In function ‘header_check_cm’:
file_cm.c:45:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_cm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_cm.c:45:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_cm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cm.c:45:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_cm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cm.c:45:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_cm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_compress.o
file_compress.c: In function ‘header_check_compress’:
file_compress.c:44:55: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_compress(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                  ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_compress.c:44:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_compress(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_compress.c:44:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_compress(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_compress.c:44:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_compress(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_cow.o
file_cow.c: In function ‘header_check_qcow1’:
file_cow.c:77:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   77 | static int header_check_qcow1(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cow.c:77:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   77 | static int header_check_qcow1(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cow.c:77:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   77 | static int header_check_qcow1(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_cow.c: In function ‘header_check_qcow2’:
file_cow.c:90:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   90 | static int header_check_qcow2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cow.c:90:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   90 | static int header_check_qcow2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cow.c:90:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   90 | static int header_check_qcow2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_cpi.o
file_cpi.c: In function ‘header_check_cpi’:
file_cpi.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_cpi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_cpi.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_cpi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cpi.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_cpi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cpi.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_cpi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_crw.o
file_crw.c: In function ‘header_check_crw’:
file_crw.c:56:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   56 | static int header_check_crw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_crw.c:56:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   56 | static int header_check_crw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_crw.c:56:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   56 | static int header_check_crw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_csh.o
file_csh.c: In function ‘header_check_csh’:
file_csh.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_csh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_csh.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_csh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_csh.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_csh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_csh.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_csh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ctg.o
file_ctg.c: In function ‘header_check_ctg’:
file_ctg.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_ctg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_ctg.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_ctg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ctg.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_ctg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ctg.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_ctg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_cwk.o
file_cwk.c: In function ‘header_check_cwk’:
file_cwk.c:73:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   73 | static int header_check_cwk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_cwk.c:73:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   73 | static int header_check_cwk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_cwk.c:73:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   73 | static int header_check_cwk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_d2s.o
file_d2s.c: In function ‘header_check_d2s’:
file_d2s.c:64:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   64 | static int header_check_d2s(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_d2s.c:64:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   64 | static int header_check_d2s(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_d2s.c:64:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   64 | static int header_check_d2s(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dad.o
file_dad.c: In function ‘header_check_dad’:
file_dad.c:73:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   73 | static int header_check_dad(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dad.c:73:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   73 | static int header_check_dad(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_dar.o
file_dar.c: In function ‘header_check_dar’:
file_dar.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dar.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dar.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dat.o
file_dat.c: In function ‘header_check_dat’:
file_dat.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_dat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dat.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dat.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dat.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_dat.c: In function ‘header_check_datIE’:
file_dat.c:52:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_datIE(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dat.c:52:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_datIE(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dat.c:52:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_datIE(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_dat.c: In function ‘header_check_dat_history4’:
file_dat.c:66:86: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   66 | static int header_check_dat_history4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                   ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dat.c:66:118: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   66 | static int header_check_dat_history4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                   ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dat.c:66:159: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   66 | static int header_check_dat_history4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                        ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_dat.c: In function ‘header_check_dat_history10’:
file_dat.c:76:87: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   76 | static int header_check_dat_history10(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                    ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dat.c:76:119: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   76 | static int header_check_dat_history10(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                    ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dat.c:76:160: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   76 | static int header_check_dat_history10(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                         ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dbf.o
file_dbf.c: In function ‘header_check_dbf’:
file_dbf.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_dbf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dbf.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_dbf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dbf.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_dbf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dbn.o
file_dbn.c: In function ‘header_check_dbn’:
file_dbn.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_dbn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dbn.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_dbn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dbn.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_dbn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dcm.o
file_dcm.c: In function ‘header_check_dcm’:
file_dcm.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_dcm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dcm.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dcm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dcm.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dcm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dcm.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dcm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ddf.o
file_ddf.c: In function ‘header_check_ddf3’:
file_ddf.c:94:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   94 | static int header_check_ddf3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ddf.c:94:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   94 | static int header_check_ddf3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ddf.c:94:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   94 | static int header_check_ddf3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_ddf.c: In function ‘header_check_ddf4’:
file_ddf.c:104:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  104 | static int header_check_ddf4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ddf.c:104:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  104 | static int header_check_ddf4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ddf.c:104:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  104 | static int header_check_ddf4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_ddf.c: In function ‘header_check_ddf5’:
file_ddf.c:114:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  114 | static int header_check_ddf5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ddf.c:114:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  114 | static int header_check_ddf5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ddf.c:114:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  114 | static int header_check_ddf5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dex.o
file_dex.c: In function ‘header_check_dex’:
file_dex.c:74:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   74 | static int header_check_dex(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dex.c:74:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   74 | static int header_check_dex(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dex.c:74:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   74 | static int header_check_dex(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dim.o
file_dim.c: In function ‘header_check_dim’:
file_dim.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_dim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dim.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dim.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dim.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dir.o
file_dir.c: In function ‘data_check_fatdir’:
file_dir.c:71:60: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   71 | static data_check_t data_check_fatdir(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                       ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dir.c: In function ‘header_check_dir’:
file_dir.c:78:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   78 | static int header_check_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dir.c:78:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   78 | static int header_check_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dir.c:78:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   78 | static int header_check_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_djv.o
file_djv.c: In function ‘header_check_djv’:
file_djv.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_djv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_djv.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_djv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_djv.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_djv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dmp.o
file_dmp.c: In function ‘header_check_dmp’:
file_dmp.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dmp.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dmp.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_doc.o
file_doc.c: In function ‘header_check_doc’:
file_doc.c:389:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  389 | static int header_check_doc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_doc.c:389:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  389 | static int header_check_doc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:447:11: note: called from here
  447 |   else if(td_memmem(buffer,buffer_size,"StarCalc",8)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:451:11: note: called from here
  451 |   else if(td_memmem(buffer,buffer_size,"StarImpress",11)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:455:11: note: called from here
  455 |   else if(td_memmem(buffer,buffer_size,"Worksheet",9)!=NULL ||
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:456:7: note: called from here
  456 |       td_memmem(buffer,buffer_size,"Book",4)!=NULL ||
      |       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:457:7: note: called from here
  457 |       td_memmem(buffer,buffer_size,"Workbook",8)!=NULL ||
      |       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:458:7: note: called from here
  458 |       td_memmem(buffer,buffer_size,"Calc",4)!=NULL)
      |       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:462:11: note: called from here
  462 |   else if(td_memmem(buffer,buffer_size,"Power",5)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:466:11: note: called from here
  466 |   else if(td_memmem(buffer,buffer_size,"AccessObjSiteData",17)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:470:11: note: called from here
  470 |   else if(td_memmem(buffer,buffer_size,"Visio",5)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:474:11: note: called from here
  474 |   else if(td_memmem(buffer,buffer_size,"SfxDocument",11)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:478:11: note: called from here
  478 |   else if(td_memmem(buffer,buffer_size,"CPicPage",8)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:482:11: note: called from here
  482 |   else if(td_memmem(buffer,buffer_size,"Microsoft Publisher",19)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:486:11: note: called from here
  486 |   else if(td_memmem(buffer, buffer_size, "Microsoft Works Database", 24)!=NULL
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:487:10: note: called from here
  487 |       || td_memmem( buffer, buffer_size, "MSWorksDBDoc", 12)!=NULL)
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from file_doc.c:39:
memmem.h:25:27: warning: inlining failed in call to ‘td_memmem’: call is unlikely and code size would grow [-Winline]
   25 | static inline const void *td_memmem(const void *haystack, const unsigned int haystack_len, const void *needle, const unsigned int needle_len)
      |                           ^~~~~~~~~
file_doc.c:491:11: note: called from here
  491 |   else if(td_memmem(buffer,buffer_size,"MetaStock",9)!=NULL)
      |           ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  CC       file_dpx.o
file_dpx.c: In function ‘header_check_dpx’:
file_dpx.c:68:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   68 | static int header_check_dpx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dpx.c:68:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   68 | static int header_check_dpx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dpx.c:68:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   68 | static int header_check_dpx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_drw.o
file_drw.c: In function ‘header_check_drw’:
file_drw.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_drw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_drw.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_drw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_drw.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_drw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ds2.o
In file included from file_ds2.c:32:
file_ds2.c: In function ‘header_check_ds2’:
file_ds2.c:63:25: warning: array subscript has type ‘char’ [-Wchar-subscripts]
   63 |     if(!isdigit(date_asc[i]))
      |                 ~~~~~~~~^~~
file_ds2.c:58:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   58 | static int header_check_ds2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ds2.c:58:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   58 | static int header_check_ds2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ds2.c:58:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   58 | static int header_check_ds2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ds_store.o
file_ds_store.c: In function ‘header_check_ds_store’:
file_ds_store.c:55:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_ds_store(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ds_store.c:55:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_ds_store(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ds_store.c:55:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_ds_store(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dsc.o
file_dsc.c: In function ‘header_check_dsc’:
file_dsc.c:43:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   43 | static int header_check_dsc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dsc.c:43:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_dsc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dsc.c:43:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_dsc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dss.o
In file included from file_dss.c:32:
file_dss.c: In function ‘header_check_dss’:
file_dss.c:66:25: warning: array subscript has type ‘char’ [-Wchar-subscripts]
   66 |     if(!isdigit(date_asc[i]))
      |                 ~~~~~~~~^~~
file_dss.c:61:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_dss(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dss.c:61:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_dss(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dss.c:61:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_dss(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dst.o
file_dst.c: In function ‘header_check_dst’:
file_dst.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dst(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dst.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dst(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dst.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dst(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dta.o
file_dta.c: In function ‘header_check_dta’:
file_dta.c:45:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_dta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dta.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_dta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dta.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_dta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dta.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_dta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dump.o
file_dump.c: In function ‘header_check_dump’:
file_dump.c:126:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  126 | static int header_check_dump(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dump.c:126:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  126 | static int header_check_dump(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dump.c:126:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  126 | static int header_check_dump(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dv.o
file_dv.c: In function ‘header_check_dv’:
file_dv.c:131:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  131 | static int header_check_dv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dv.c:131:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  131 | static int header_check_dv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_dvi.o
file_dvi.c: In function ‘header_check_dvi’:
file_dvi.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dvi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dvi.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dvi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dvi.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dvi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dvr.o
file_dvr.c: In function ‘header_check_dvr’:
file_dvr.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dvr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dvr.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dvr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_dwg.o
file_dwg.c: In function ‘header_check_dwg’:
file_dwg.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_dwg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dwg.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_dwg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dwg.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_dwg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dwg.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_dwg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_dxf.o
file_dxf.c: In function ‘header_check_dxf’:
file_dxf.c:47:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   47 | static int header_check_dxf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_dxf.c:47:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_dxf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_dxf.c:47:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_dxf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_dxf.c:47:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_dxf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_e01.o
file_e01.c: In function ‘header_check_e01’:
file_e01.c:86:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   86 | static int header_check_e01(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_e01.c:86:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   86 | static int header_check_e01(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_e01.c:86:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   86 | static int header_check_e01(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_edb.o
file_edb.c: In function ‘header_check_edb’:
file_edb.c:46:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   46 | static int header_check_edb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_edb.c:46:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_edb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_edb.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_edb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_ecryptfs.o
file_ecryptfs.c: In function ‘header_check_ecryptfs’:
file_ecryptfs.c:71:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   71 | static int header_check_ecryptfs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ecryptfs.c:71:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   71 | static int header_check_ecryptfs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ecryptfs.c:71:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   71 | static int header_check_ecryptfs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_elf.o
file_elf.c: In function ‘header_check_elf’:
file_elf.c:120:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  120 | static int header_check_elf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_elf.c:120:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  120 | static int header_check_elf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_elf.c:120:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  120 | static int header_check_elf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_emf.o
file_emf.c: In function ‘header_check_emf’:
file_emf.c:204:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  204 | static int header_check_emf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_emf.c:204:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  204 | static int header_check_emf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_emf.c:204:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  204 | static int header_check_emf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ess.o
file_ess.c: In function ‘header_check_ess’:
file_ess.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_ess(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_ess.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_ess(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ess.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_ess(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ess.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_ess(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_evt.o
file_evt.c: In function ‘header_check_evt’:
file_evt.c:84:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   84 | static int header_check_evt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_evt.c:84:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   84 | static int header_check_evt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_evt.c:84:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   84 | static int header_check_evt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_evtx.o
file_evtx.c: In function ‘header_check_evtx’:
file_evtx.c:61:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_evtx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_evtx.c:61:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_evtx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_evtx.c:61:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_evtx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_exe.o
file_exe.c: In function ‘header_check_exe’:
file_exe.c:59:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   59 | static int header_check_exe(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_exe.c:59:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   59 | static int header_check_exe(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_exs.o
file_exs.c: In function ‘header_check_exs’:
file_exs.c:56:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   56 | static int header_check_exs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_exs.c:56:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   56 | static int header_check_exs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_exs.c:56:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   56 | static int header_check_exs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ext.o
file_ext.c: In function ‘header_check_ext2_sb’:
file_ext.c:66:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   66 | static int header_check_ext2_sb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ext.c:66:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   66 | static int header_check_ext2_sb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ext.c:66:154: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   66 | static int header_check_ext2_sb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                   ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_ext.c: In function ‘data_check_extdir’:
file_ext.c:80:60: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   80 | static data_check_t data_check_extdir(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                       ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_ext.c: In function ‘header_check_ext2_dir’:
file_ext.c:104:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  104 | static int header_check_ext2_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ext.c:104:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  104 | static int header_check_ext2_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ext.c:104:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  104 | static int header_check_ext2_dir(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
In file included from file_ext.c:31:
file_ext.c: In function ‘file_rename_ext’:
file_ext.c:61:20: warning: array subscript ‘const struct ext2_super_block[0]’ is partly outside array bounds of ‘unsigned char[512]’ [-Warray-bounds]
   61 |   block_nr=(le32(sb->s_first_data_block)+le16(sb->s_block_group_nr)*le32(sb->s_blocks_per_group));
      |                    ^~
common.h:461:19: note: in definition of macro ‘le32’
  461 | #define le32(x)  (x)
      |                   ^
file_ext.c:49:17: note: while referencing ‘buffer’
   49 |   unsigned char buffer[512];
      |                 ^~~~~~
In file included from file_ext.c:31:
file_ext.c:61:49: warning: array subscript ‘const struct ext2_super_block[0]’ is partly outside array bounds of ‘unsigned char[512]’ [-Warray-bounds]
   61 |   block_nr=(le32(sb->s_first_data_block)+le16(sb->s_block_group_nr)*le32(sb->s_blocks_per_group));
      |                                                 ^~
common.h:457:19: note: in definition of macro ‘le16’
  457 | #define le16(x)  (x)             /* x as little endian */
      |                   ^
file_ext.c:49:17: note: while referencing ‘buffer’
   49 |   unsigned char buffer[512];
      |                 ^~~~~~
In file included from file_ext.c:31:
file_ext.c:61:76: warning: array subscript ‘const struct ext2_super_block[0]’ is partly outside array bounds of ‘unsigned char[512]’ [-Warray-bounds]
   61 |   block_nr=(le32(sb->s_first_data_block)+le16(sb->s_block_group_nr)*le32(sb->s_blocks_per_group));
      |                                                                            ^~
common.h:461:19: note: in definition of macro ‘le32’
  461 | #define le32(x)  (x)
      |                   ^
file_ext.c:49:17: note: while referencing ‘buffer’
   49 |   unsigned char buffer[512];
      |                 ^~~~~~
  CC       file_ext2.o
file_ext2.c: In function ‘header_check_ext2_fs’:
file_ext2.c:55:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_ext2_fs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ext2.c:55:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_ext2_fs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_fat.o
file_fat.c: In function ‘header_check_fat’:
file_fat.c:60:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   60 | static int header_check_fat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fat.c:60:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   60 | static int header_check_fat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fat.c:60:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   60 | static int header_check_fat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fbf.o
file_fbf.c: In function ‘header_check_fbf’:
file_fbf.c:45:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_fbf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fbf.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_fbf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fbf.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_fbf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fbf.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_fbf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fbk.o
file_fbk.c: In function ‘header_check_fbk’:
file_fbk.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_fbk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fbk.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_fbk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fbk.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_fbk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fbk.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_fbk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fcp.o
file_fcp.c: In function ‘header_check_fcp’:
file_fcp.c:49:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   49 | static int header_check_fcp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fcp.c:49:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   49 | static int header_check_fcp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fcp.c:49:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   49 | static int header_check_fcp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fcp.c:49:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   49 | static int header_check_fcp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fcs.o
file_fcs.c: In function ‘header_check_fcs’:
file_fcs.c:95:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   95 | static int header_check_fcs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fcs.c:95:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   95 | static int header_check_fcs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fdb.o
file_fdb.c: In function ‘header_check_fdb’:
file_fdb.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_fdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fdb.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_fdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fdb.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_fdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_fds.o
file_fds.c: In function ‘header_check_fds’:
file_fds.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_fds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fds.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_fds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fds.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_fds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fh10.o
file_fh10.c: In function ‘header_check_fh10’:
file_fh10.c:46:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   46 | static int header_check_fh10(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fh10.c:46:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_fh10(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fh10.c:46:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_fh10(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fh10.c:46:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_fh10(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fh5.o
file_fh5.c: In function ‘header_check_fh5’:
file_fh5.c:61:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_fh5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fh5.c:61:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_fh5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fh5.c:61:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_fh5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_filevault.o
file_filevault.c: In function ‘header_check_filevault’:
file_filevault.c:45:56: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_filevault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                   ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_filevault.c:45:83: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_filevault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_filevault.c:45:115: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_filevault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_filevault.c:45:156: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_filevault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                     ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fits.o
file_fits.c: In function ‘header_check_fits’:
file_fits.c:143:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  143 | static int header_check_fits(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fits.c:143:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  143 | static int header_check_fits(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fit.o
file_fit.c: In function ‘header_check_fit’:
file_fit.c:55:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_fit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fit.c:55:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_fit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fit.c:55:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_fit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_flac.o
file_flac.c: In function ‘header_check_flac’:
file_flac.c:81:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   81 | static int header_check_flac(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_flac.c:81:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   81 | static int header_check_flac(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_flac.c:81:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   81 | static int header_check_flac(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_flp.o
file_flp.c: In function ‘header_check_flp’:
file_flp.c:57:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   57 | static int header_check_flp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_flp.c:57:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   57 | static int header_check_flp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_flp.c:57:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   57 | static int header_check_flp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_flv.o
file_flv.c: In function ‘header_check_flv’:
file_flv.c:94:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   94 | static int header_check_flv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_flv.c:94:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   94 | static int header_check_flv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_flv.c:94:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   94 | static int header_check_flv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fm.o
file_fm.c: In function ‘header_check_fm’:
file_fm.c:51:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   51 | static int header_check_fm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fm.c:51:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   51 | static int header_check_fm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fm.c:51:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   51 | static int header_check_fm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fob.o
file_fob.c: In function ‘header_check_fob’:
file_fob.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_fob(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fob.c:46:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_fob(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fos.o
file_fos.c: In function ‘header_check_fos’:
file_fos.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_fos(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fos.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_fos(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fos.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_fos(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fos.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_fos(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fp5.o
file_fp5.c: In function ‘header_check_fp5’:
file_fp5.c:43:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   43 | static int header_check_fp5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fp5.c:43:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   43 | static int header_check_fp5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fp5.c:43:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_fp5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fp5.c:43:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_fp5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fp7.o
file_fp7.c: In function ‘header_check_fp7’:
file_fp7.c:49:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   49 | static int header_check_fp7(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fp7.c:49:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   49 | static int header_check_fp7(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_freeway.o
file_freeway.c: In function ‘header_check_freeway’:
file_freeway.c:44:54: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_freeway(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                 ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_freeway.c:44:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_freeway(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_freeway.c:44:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_freeway(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_freeway.c:44:154: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_freeway(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                   ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_frm.o
file_frm.c: In function ‘header_check_frm’:
file_frm.c:56:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   56 | static int header_check_frm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_frm.c:56:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   56 | static int header_check_frm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_frm.c:56:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   56 | static int header_check_frm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fs.o
file_fs.c: In function ‘header_check_fs’:
file_fs.c:82:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   82 | static int header_check_fs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fs.c:82:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   82 | static int header_check_fs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fs.c:82:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   82 | static int header_check_fs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_fwd.o
file_fwd.c: In function ‘header_check_fwd’:
file_fwd.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_fwd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_fwd.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_fwd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_fwd.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_fwd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_fwd.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_fwd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gam.o
file_gam.c: In function ‘header_check_gam’:
file_gam.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_gam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_gam.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_gam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gam.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_gam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gam.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_gam(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gct.o
file_gct.c: In function ‘header_check_gct’:
file_gct.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_gct(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_gct.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_gct(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gct.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_gct(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gct.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_gct(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gho.o
file_gho.c: In function ‘header_check_db’:
file_gho.c:44:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_db(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gho.c:44:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_db(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gho.c:44:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_db(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gi.o
file_gi.c: In function ‘header_check_gi’:
file_gi.c:51:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   51 | static int header_check_gi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gi.c:51:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   51 | static int header_check_gi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gi.c:51:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   51 | static int header_check_gi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gif.o
file_gif.c: In function ‘header_check_gif’:
file_gif.c:49:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   49 | static int header_check_gif(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gif.c:49:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   49 | static int header_check_gif(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gm6.o
file_gm6.c: In function ‘header_check_gm81’:
file_gm6.c:45:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_gm81(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_gm6.c:45:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_gm81(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gm6.c:45:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_gm81(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gm6.c:45:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_gm81(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_gm6.c: In function ‘header_check_gmk’:
file_gm6.c:53:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   53 | static int header_check_gmk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_gm6.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_gmk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gm6.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_gmk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gm6.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_gmk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_gm6.c: In function ‘header_check_gm6’:
file_gm6.c:61:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   61 | static int header_check_gm6(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_gm6.c:61:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_gm6(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gm6.c:61:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_gm6(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gm6.c:61:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_gm6(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_gm6.c: In function ‘header_check_gmd’:
file_gm6.c:69:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   69 | static int header_check_gmd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_gm6.c:69:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   69 | static int header_check_gmd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gm6.c:69:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   69 | static int header_check_gmd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gm6.c:69:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   69 | static int header_check_gmd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gp2.o
file_gp2.c: In function ‘header_check_gp2’:
file_gp2.c:52:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   52 | static int header_check_gp2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_gp2.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_gp2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gp2.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_gp2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gp2.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_gp2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gp5.o
file_gp5.c: In function ‘header_check_gp5’:
file_gp5.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_gp5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gp5.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_gp5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gp5.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_gp5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gpg.o
file_gpg.c: In function ‘header_check_gpg’:
file_gpg.c:411:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  411 | static int header_check_gpg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gpg.c:411:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  411 | static int header_check_gpg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gpx.o
file_gpx.c: In function ‘header_check_gpx’:
file_gpx.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_gpx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gpx.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_gpx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_gpx.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_gpx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_gsm.o
file_gsm.c: In function ‘header_check_gsm’:
file_gsm.c:67:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   67 | static int header_check_gsm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gsm.c:67:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   67 | static int header_check_gsm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_gz.o
file_gz.c: In function ‘file_check_bgzf’:
file_gz.c:77:46: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   77 | static void file_check_bgzf(file_recovery_t *file_recovery)
      |                             ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_gz.c: In function ‘header_check_bgzf’:
file_gz.c:81:115: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   81 | static int header_check_bgzf(const unsigned char *buffer, const unsigned char *buffer_uncompr, const unsigned int buffer_size, file_recovery_t *file_recovery_new)
      |                                                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_gz.c: In function ‘header_check_gz’:
file_gz.c:116:7: warning: variable ‘bgzf’ set but not used [-Wunused-but-set-variable]
  116 |   int bgzf=0;
      |       ^~~~
file_gz.c:111:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  111 | static int header_check_gz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
At top level:
file_gz.c:81:12: warning: ‘header_check_bgzf’ defined but not used [-Wunused-function]
   81 | static int header_check_bgzf(const unsigned char *buffer, const unsigned char *buffer_uncompr, const unsigned int buffer_size, file_recovery_t *file_recovery_new)
      |            ^~~~~~~~~~~~~~~~~
  CC       file_hdf.o
file_hdf.c: In function ‘header_check_hdf’:
file_hdf.c:116:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  116 | static int header_check_hdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_hdf.c:116:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  116 | static int header_check_hdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_hdf.c:116:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  116 | static int header_check_hdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_hdr.o
file_hdr.c: In function ‘header_check_hdr’:
file_hdr.c:58:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   58 | static int header_check_hdr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_hdr.c:58:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   58 | static int header_check_hdr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_hdr.c:58:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   58 | static int header_check_hdr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_hds.o
file_hds.c: In function ‘header_check_hds’:
file_hds.c:56:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   56 | static int header_check_hds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_hds.c:56:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   56 | static int header_check_hds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_hds.c:56:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   56 | static int header_check_hds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_hfsp.o
file_hfsp.c: In function ‘header_check_hfsp’:
file_hfsp.c:46:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_hfsp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_hfsp.c:46:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_hfsp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_hfsp.c:46:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_hfsp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_hm.o
file_hm.c: In function ‘header_check_hm’:
file_hm.c:44:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_hm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_hm.c:44:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_hm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_hm.c:44:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_hm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_hm.c:44:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_hm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_hr9.o
file_hr9.c: In function ‘header_check_hr9’:
file_hr9.c:49:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   49 | static int header_check_hr9(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_hr9.c:49:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   49 | static int header_check_hr9(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_hr9.c:49:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   49 | static int header_check_hr9(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_hr9.c:49:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   49 | static int header_check_hr9(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_http.o
file_http.c: In function ‘header_check_http’:
file_http.c:44:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_http(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_http.c:44:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_http(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_http.c:44:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_http(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_http.c:44:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_http(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ibd.o
file_ibd.c: In function ‘header_check_ibd’:
file_ibd.c:52:10: warning: left shift of negative value [-Wshift-negative-value]
   52 |   ((~(~0 << (DICT_TF_BITS - DICT_TF_FORMAT_SHIFT))) << DICT_TF_FORMAT_SHIFT)
      |          ^~
file_ibd.c:81:42: note: in expansion of macro ‘DICT_TF_FORMAT_MASK’
   81 |     const unsigned int format = (flags & DICT_TF_FORMAT_MASK) >> DICT_TF_FORMAT_SHIFT;
      |                                          ^~~~~~~~~~~~~~~~~~~
file_ibd.c:68:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   68 | static int header_check_ibd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ibd.c:68:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   68 | static int header_check_ibd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_icc.o
file_icc.c: In function ‘header_check_icc’:
file_icc.c:43:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   43 | static int header_check_icc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_icc.c:43:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_icc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_icc.c:43:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_icc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_icns.o
file_icns.c: In function ‘header_check_icns’:
file_icns.c:99:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   99 | static int header_check_icns(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_icns.c:99:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   99 | static int header_check_icns(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_icns.c:99:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   99 | static int header_check_icns(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ico.o
file_ico.c: In function ‘header_check_ico’:
file_ico.c:94:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   94 | static int header_check_ico(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ico.c:94:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   94 | static int header_check_ico(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ico.c:94:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   94 | static int header_check_ico(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ifo.o
file_ifo.c: In function ‘header_check_ifo’:
file_ifo.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_ifo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ifo.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_ifo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ifo.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_ifo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_idx.o
file_idx.c: In function ‘header_check_idx’:
file_idx.c:57:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   57 | static int header_check_idx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_idx.c:57:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   57 | static int header_check_idx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_imb.o
file_imb.c: In function ‘header_check_imb’:
file_imb.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_imb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_imb.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_imb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_imb.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_imb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_imb.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_imb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_indd.o
file_indd.c: In function ‘header_check_indd’:
file_indd.c:114:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  114 | static int header_check_indd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_indd.c:114:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  114 | static int header_check_indd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_info.o
file_info.c: In function ‘header_check_info’:
file_info.c:44:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_info(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_info.c:44:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_info(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_info.c:44:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_info(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_info.c:44:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_info(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_iso.o
file_iso.c: In function ‘header_check_db’:
file_iso.c:46:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_db(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_iso.c:46:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_db(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_it.o
file_it.c: In function ‘header_check_it’:
file_it.c:71:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   71 | static int header_check_it(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_it.c:71:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   71 | static int header_check_it(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_it.c:71:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   71 | static int header_check_it(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_itu.o
file_itu.c: In function ‘header_check_itunes’:
file_itu.c:45:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_itunes(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_itu.c:45:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_itunes(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_itu.c:45:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_itunes(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_jks.o
file_jks.c: In function ‘header_check_jks’:
file_jks.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_jks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_jks.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_jks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_jks.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_jks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_jpg.o
file_jpg.c: In function ‘header_check_jpg’:
file_jpg.c:375:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  375 | static int header_check_jpg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_jpg.c: In function ‘file_check_jpg’:
file_jpg.c:1668:19: warning: unused variable ‘thumb_error’ [-Wunused-variable]
 1668 |   static uint64_t thumb_error=0;
      |                   ^~~~~~~~~~~
file_jpg.c:1667:12: warning: variable ‘thumb_offset’ set but not used [-Wunused-but-set-variable]
 1667 |   uint64_t thumb_offset;
      |            ^~~~~~~~~~~~
At top level:
file_jpg.c:1668:19: warning: ‘thumb_error’ defined but not used [-Wunused-variable]
 1668 |   static uint64_t thumb_error=0;
      |                   ^~~~~~~~~~~
  CC       file_jsonlz4.o
file_jsonlz4.c: In function ‘header_check_jsonlz4’:
file_jsonlz4.c:45:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_jsonlz4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_jsonlz4.c:45:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_jsonlz4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_jsonlz4.c:45:154: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_jsonlz4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                   ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_kdb.o
file_kdb.c: In function ‘header_check_kdb’:
file_kdb.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_kdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_kdb.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_kdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_kdb.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_kdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_kdb.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_kdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_kdbx.o
file_kdbx.c: In function ‘header_check_kdbx’:
file_kdbx.c:44:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_kdbx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_kdbx.c:44:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_kdbx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_kdbx.c:44:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_kdbx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_kdbx.c:44:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_kdbx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_key.o
file_key.c: In function ‘header_check_key’:
file_key.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_key(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_key.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_key(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_key.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_key(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_key.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_key(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ldf.o
file_ldf.c: In function ‘header_check_ldf’:
file_ldf.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_ldf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ldf.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_ldf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ldf.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_ldf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_lit.o
file_lit.c: In function ‘header_check_lit’:
file_lit.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_lit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_lit.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_lit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_lit.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_lit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_lit.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_lit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_lnk.o
file_lnk.c: In function ‘header_check_lnk’:
file_lnk.c:222:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  222 | static int header_check_lnk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_lnk.c:222:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  222 | static int header_check_lnk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_logic.o
file_logic.c: In function ‘header_check_logic’:
file_logic.c:44:52: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_logic(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                               ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_logic.c:44:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_logic(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_logic.c:44:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_logic(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_logic.c:44:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_logic(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_lso.o
file_lso.c: In function ‘header_check_lso’:
file_lso.c:50:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   50 | static int header_check_lso(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_lso.c:50:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   50 | static int header_check_lso(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_lso.c:50:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   50 | static int header_check_lso(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_lso.c:50:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   50 | static int header_check_lso(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_luks.o
file_luks.c: In function ‘header_check_luks’:
file_luks.c:51:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   51 | static int header_check_luks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_luks.c:51:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   51 | static int header_check_luks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_luks.c:51:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   51 | static int header_check_luks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_lxo.o
file_lxo.c: In function ‘header_check_lxo’:
file_lxo.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_lxo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_lxo.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_lxo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_lxo.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_lxo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_lzh.o
file_lzh.c: In function ‘header_check_lzh’:
file_lzh.c:107:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  107 | static int header_check_lzh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_lzh.c:107:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  107 | static int header_check_lzh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_lzh.c:107:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  107 | static int header_check_lzh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_lzo.o
file_lzo.c: In function ‘header_check_lzo’:
file_lzo.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_lzo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_lzo.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_lzo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_lzo.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_lzo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_lzo.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_lzo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_m2ts.o
file_m2ts.c: In function ‘header_check_m2ts’:
file_m2ts.c:112:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  112 | static int header_check_m2ts(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_m2ts.c: In function ‘header_check_m2t’:
file_m2ts.c:169:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  169 | static int header_check_m2t(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_mat.o
file_mat.c: In function ‘header_check_mat’:
file_mat.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_mat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mat.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_mat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mat.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_mat(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_max.o
file_max.c: In function ‘header_check_max’:
file_max.c:46:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   46 | static int header_check_max(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_max.c:46:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_max(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_max.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_max(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_max.c:46:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_max(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mb.o
file_mb.c: In function ‘header_check_mb’:
file_mb.c:52:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_mb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mb.c:52:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_mb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mb.c:52:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_mb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_mb.c: In function ‘header_check_mp’:
file_mb.c:66:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   66 | static int header_check_mp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mb.c:66:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   66 | static int header_check_mp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mb.c:66:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   66 | static int header_check_mp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mcd.o
file_mcd.c: In function ‘header_check_mcd’:
file_mcd.c:43:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   43 | static int header_check_mcd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mcd.c:43:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_mcd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mcd.c:43:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_mcd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mdb.o
file_mdb.c: In function ‘header_check_accdb’:
file_mdb.c:54:52: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   54 | static int header_check_accdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                               ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_mdb.c:54:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_accdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mdb.c:54:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_accdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mdb.c:54:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_accdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_mdb.c: In function ‘header_check_mdb’:
file_mdb.c:61:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   61 | static int header_check_mdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_mdb.c:61:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_mdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mdb.c:61:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_mdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mdb.c:61:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_mdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mdf.o
file_mdf.c: In function ‘header_check_mdf’:
file_mdf.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_mdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mdf.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_mdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mdf.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_mdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mfa.o
file_mfa.c: In function ‘header_check_mfa’:
file_mfa.c:49:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   49 | static int header_check_mfa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_mfa.c:49:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   49 | static int header_check_mfa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mfa.c:49:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   49 | static int header_check_mfa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mfa.c:49:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   49 | static int header_check_mfa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mfg.o
file_mfg.c: In function ‘header_check_mfg’:
file_mfg.c:52:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   52 | static int header_check_mfg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_mfg.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_mfg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mfg.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_mfg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mfg.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_mfg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mft.o
file_mft.c: In function ‘header_check_mft’:
file_mft.c:64:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   64 | static int header_check_mft(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mft.c:64:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   64 | static int header_check_mft(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mft.c:64:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   64 | static int header_check_mft(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mid.o
file_mid.c: In function ‘header_check_mid’:
file_mid.c:104:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  104 | static int header_check_mid(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mid.c:104:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  104 | static int header_check_mid(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mid.c:104:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  104 | static int header_check_mid(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mig.o
file_mig.c: In function ‘header_check_mig’:
file_mig.c:97:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   97 | static int header_check_mig(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mig.c:97:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   97 | static int header_check_mig(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mig.c:97:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   97 | static int header_check_mig(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mk5.o
file_mk5.c: In function ‘header_check_mk5’:
file_mk5.c:43:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   43 | static int header_check_mk5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mk5.c:43:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_mk5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mk5.c:43:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_mk5(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mkv.o
file_mkv.c: In function ‘header_check_mkv’:
file_mkv.c:119:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  119 | static int header_check_mkv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mkv.c:119:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  119 | static int header_check_mkv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mlv.o
file_mlv.c: In function ‘header_check_mlv’:
file_mlv.c:132:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  132 | static int header_check_mlv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mlv.c:132:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  132 | static int header_check_mlv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mlv.c:132:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  132 | static int header_check_mlv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mobi.o
file_mobi.c: In function ‘header_check_mobi’:
file_mobi.c:59:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   59 | static int header_check_mobi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_mobi.c:59:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   59 | static int header_check_mobi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mobi.c:59:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   59 | static int header_check_mobi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mobi.c:59:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   59 | static int header_check_mobi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mov.o
file_mov.c: In function ‘header_check_mov_aux’:
file_mov.c:127:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  127 | static int header_check_mov_aux(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_mp3.o
file_mp3.c: In function ‘header_check_id3’:
file_mp3.c:115:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  115 | static int header_check_id3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mp3.c:115:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  115 | static int header_check_id3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mp3.c:115:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  115 | static int header_check_id3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_mp3.c: In function ‘header_check_mp3’:
file_mp3.c:145:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  145 | static int header_check_mp3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_mpg.o
file_mpg.c: In function ‘header_check_mpg_Pack’:
file_mpg.c:164:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  164 | static int header_check_mpg_Pack(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mpg.c: In function ‘header_check_mpg_System’:
file_mpg.c:227:116: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  227 | static int header_check_mpg_System(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                 ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mpg.c: In function ‘header_check_mpg_Sequence’:
file_mpg.c:268:118: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  268 | static int header_check_mpg_Sequence(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                   ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mpg.c: In function ‘header_check_mpg4_ElemVideo’:
file_mpg.c:302:120: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  302 | static int header_check_mpg4_ElemVideo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                     ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_mpl.o
file_mpl.c: In function ‘header_check_mpl’:
file_mpl.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_mpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_mpl.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_mpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mpl.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_mpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mpl.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_mpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mrw.o
file_mrw.c: In function ‘header_check_mrw’:
file_mrw.c:71:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   71 | static int header_check_mrw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mrw.c:71:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   71 | static int header_check_mrw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mrw.c:71:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   71 | static int header_check_mrw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_msa.o
file_msa.c: In function ‘header_check_msa’:
file_msa.c:51:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   51 | static int header_check_msa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_msa.c:51:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   51 | static int header_check_msa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_msa.c:51:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   51 | static int header_check_msa(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mus.o
file_mus.c: In function ‘header_check_mus’:
file_mus.c:50:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   50 | static int header_check_mus(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_mus.c:50:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   50 | static int header_check_mus(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mus.c:50:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   50 | static int header_check_mus(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mus.c:50:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   50 | static int header_check_mus(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_mxf.o
file_mxf.c: In function ‘header_check_mxf’:
file_mxf.c:106:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  106 | static int header_check_mxf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mxf.c:106:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  106 | static int header_check_mxf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mxf.c:106:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  106 | static int header_check_mxf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_myo.o
file_myo.c: In function ‘header_check_myo’:
file_myo.c:46:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_myo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_myo.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_myo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_mysql.o
file_mysql.c: In function ‘header_check_mysql’:
file_mysql.c:55:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_mysql(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_mysql.c:55:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_mysql(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_mysql.c:55:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_mysql(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_nd2.o
file_nd2.c: In function ‘header_check_nd2’:
file_nd2.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_nd2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_nd2.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_nd2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_nd2.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_nd2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_nds.o
file_nds.c: In function ‘header_check_nds’:
file_nds.c:59:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   59 | static int header_check_nds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_nds.c:59:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   59 | static int header_check_nds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_nds.c:59:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   59 | static int header_check_nds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_nes.o
file_nes.c: In function ‘header_check_nes’:
file_nes.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_nes(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_nes.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_nes(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_nes.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_nes(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_njx.o
file_njx.c: In function ‘header_check_njx’:
file_njx.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_njx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_njx.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_njx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_njx.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_njx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_nk2.o
file_nk2.c: In function ‘header_check_nk2’:
file_nk2.c:180:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  180 | static int header_check_nk2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_nk2.c:180:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  180 | static int header_check_nk2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_nk2.c:180:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  180 | static int header_check_nk2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_nk2.c:180:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  180 | static int header_check_nk2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_nsf.o
file_nsf.c: In function ‘header_check_nsf’:
file_nsf.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_nsf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_nsf.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_nsf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_nsf.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_nsf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_oci.o
file_oci.c: In function ‘header_check_oci’:
file_oci.c:86:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   86 | static int header_check_oci(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_oci.c:86:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   86 | static int header_check_oci(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ogg.o
file_ogg.c: In function ‘header_check_ogg’:
file_ogg.c:49:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   49 | static int header_check_ogg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ogg.c:49:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   49 | static int header_check_ogg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_one.o
file_one.c: In function ‘header_check_one’:
file_one.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_one(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_one.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_one(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_one.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_one(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_orf.o
file_orf.c: In function ‘header_check_orf_IIRS’:
file_orf.c:45:55: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_orf_IIRS(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                  ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_orf.c:45:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_orf_IIRS(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_orf.c:45:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_orf_IIRS(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_orf.c:45:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_orf_IIRS(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_orf.c: In function ‘header_check_orf_IIRO’:
file_orf.c:52:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_orf_IIRO(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_orf.c:52:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_orf_IIRO(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_paf.o
file_paf.c: In function ‘header_check_paf’:
file_paf.c:47:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   47 | static int header_check_paf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_paf.c:47:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_paf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_paf.c:47:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_paf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_paf.c:47:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_paf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pap.o
file_pap.c: In function ‘header_check_pap’:
file_pap.c:45:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_pap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_pap.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_pap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pap.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_pap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pap.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_pap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_par2.o
file_par2.c: In function ‘header_check_par2’:
file_par2.c:108:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  108 | static int header_check_par2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_par2.c:108:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  108 | static int header_check_par2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_pcap.o
file_pcap.c: In function ‘header_check_pcap’:
file_pcap.c:44:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_pcap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_pcap.c:44:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_pcap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pcap.c:44:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_pcap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pcap.c:44:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_pcap(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pcb.o
file_pcb.c: In function ‘header_check_pcb’:
file_pcb.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_pcb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_pcb.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_pcb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pcb.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_pcb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pcb.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_pcb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pct.o
file_pct.c: In function ‘header_check_pct’:
file_pct.c:82:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   82 | static int header_check_pct(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pct.c:82:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   82 | static int header_check_pct(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_pcx.o
file_pcx.c: In function ‘header_check_pcx’:
file_pcx.c:85:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   85 | static int header_check_pcx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pcx.c:85:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   85 | static int header_check_pcx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pcx.c:85:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   85 | static int header_check_pcx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pdb.o
file_pdb.c: In function ‘header_check_pdb’:
file_pdb.c:71:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   71 | static int header_check_pdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pdb.c:71:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   71 | static int header_check_pdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pdb.c:71:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   71 | static int header_check_pdb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pdf.o
file_pdf.c: In function ‘header_check_pdf’:
file_pdf.c:272:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  272 | static int header_check_pdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pdf.c:272:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  272 | static int header_check_pdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pds.o
file_pds.c: In function ‘header_check_pds’:
file_pds.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_pds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_pds.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_pds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pds.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_pds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pds.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_pds(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pf.o
file_pf.c: In function ‘header_check_pf’:
file_pf.c:72:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   72 | static int header_check_pf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pf.c:72:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   72 | static int header_check_pf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pf.c:72:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   72 | static int header_check_pf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pfx.o
file_pfx.c: In function ‘header_check_pfx’:
file_pfx.c:66:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   66 | static int header_check_pfx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pfx.c:66:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   66 | static int header_check_pfx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pfx.c:66:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   66 | static int header_check_pfx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pgdump.o
file_pgdump.c: In function ‘header_check_pgdump’:
file_pgdump.c:96:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   96 | static int header_check_pgdump(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pgdump.c:96:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   96 | static int header_check_pgdump(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pgdump.c:96:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   96 | static int header_check_pgdump(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_plist.o
file_plist.c: In function ‘header_check_plist’:
file_plist.c:47:52: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   47 | static int header_check_plist(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                               ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_plist.c:47:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_plist(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_plist.c:47:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_plist(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_plr.o
file_plr.c: In function ‘header_check_plr’:
file_plr.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_plr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_plr.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_plr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_plr.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_plr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_plr.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_plr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_plt.o
file_plt.c: In function ‘header_check_plt’:
file_plt.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_plt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_plt.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_plt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_plt.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_plt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_plt.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_plt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_png.o
file_png.c: In function ‘header_check_jng’:
file_png.c:75:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   75 | static int header_check_jng(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_png.c:75:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   75 | static int header_check_jng(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_png.c:75:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   75 | static int header_check_jng(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_png.c: In function ‘header_check_mng’:
file_png.c:93:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   93 | static int header_check_mng(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_png.c:93:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   93 | static int header_check_mng(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_png.c:93:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   93 | static int header_check_mng(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_png.c: In function ‘header_check_png’:
file_png.c:172:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  172 | static int header_check_png(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_png.c:172:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  172 | static int header_check_png(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_pnm.o
file_pnm.c: In function ‘header_check_pbm’:
file_pnm.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_pbm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pnm.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_pbm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pnm.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_pbm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_pnm.c: In function ‘header_check_pgm’:
file_pnm.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_pgm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pnm.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_pgm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pnm.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_pgm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_pnm.c: In function ‘header_check_ppm’:
file_pnm.c:63:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   63 | static int header_check_ppm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pnm.c:63:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   63 | static int header_check_ppm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pnm.c:63:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   63 | static int header_check_ppm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_prc.o
file_prc.c: In function ‘header_check_prc’:
file_prc.c:61:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   61 | static int header_check_prc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_prc.c:61:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   61 | static int header_check_prc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_prc.c:61:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   61 | static int header_check_prc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_prd.o
file_prd.c: In function ‘header_check_prd’:
file_prd.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_prd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_prd.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_prd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_prd.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_prd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_prt.o
file_prt.c: In function ‘header_check_prt’:
file_prt.c:52:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   52 | static int header_check_prt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_prt.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_prt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_prt.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_prt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_prt.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_prt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ps.o
file_ps.c: In function ‘header_check_ps’:
file_ps.c:55:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_ps(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ps.c:55:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_ps(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ps.c:55:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_ps(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_psb.o
file_psb.c: In function ‘header_check_psb’:
file_psb.c:65:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   65 | static int header_check_psb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_psb.c:65:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   65 | static int header_check_psb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_psb.c:65:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   65 | static int header_check_psb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_psb.c: In function ‘psb_skip_image_data’:
file_psb.c:98:62: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   98 | static data_check_t psb_skip_image_data(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                         ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_psb.c:98:89: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   98 | static data_check_t psb_skip_image_data(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                                                      ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
  CC       file_psd.o
file_psd.c: In function ‘header_check_psd’:
file_psd.c:65:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   65 | static int header_check_psd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_psd.c:65:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   65 | static int header_check_psd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_psd.c:65:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   65 | static int header_check_psd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_psd.c: In function ‘psd_skip_image_data’:
file_psd.c:98:62: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   98 | static data_check_t psd_skip_image_data(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                         ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_psd.c:98:89: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   98 | static data_check_t psd_skip_image_data(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                                                      ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
  CC       file_psf.o
file_psf.c: In function ‘header_check_psf’:
file_psf.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_psf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_psf.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_psf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_psp.o
file_psp.c: In function ‘header_check_psp’:
file_psp.c:73:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   73 | static int header_check_psp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_psp.c:73:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   73 | static int header_check_psp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_psp.c:73:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   73 | static int header_check_psp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pst.o
file_pst.c: In function ‘header_check_dbx’:
file_pst.c:51:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   51 | static int header_check_dbx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pst.c:51:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   51 | static int header_check_dbx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pst.c:51:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   51 | static int header_check_dbx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_pst.c: In function ‘header_check_wab’:
file_pst.c:92:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   92 | static int header_check_wab(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_pst.c:92:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   92 | static int header_check_wab(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pst.c:92:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   92 | static int header_check_wab(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pst.c:92:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   92 | static int header_check_wab(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_pst.c: In function ‘header_check_pst’:
file_pst.c:99:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   99 | static int header_check_pst(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pst.c:99:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   99 | static int header_check_pst(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pst.c:99:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   99 | static int header_check_pst(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ptb.o
file_ptb.c: In function ‘header_check_ptb’:
file_ptb.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_ptb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ptb.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_ptb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ptb.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_ptb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ptf.o
file_ptf.c: In function ‘header_check_ptf’:
file_ptf.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_ptf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ptf.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_ptf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ptf.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_ptf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pyc.o
file_pyc.c: In function ‘header_check_pyc’:
file_pyc.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_pyc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pyc.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_pyc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pyc.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_pyc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pzf.o
file_pzf.c: In function ‘header_check_pzf’:
file_pzf.c:54:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   54 | static int header_check_pzf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_pzf.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_pzf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pzf.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_pzf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pzf.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_pzf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_pzh.o
file_pzh.c: In function ‘header_check_pzh’:
file_pzh.c:69:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   69 | static int header_check_pzh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_pzh.c:69:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   69 | static int header_check_pzh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_pzh.c:69:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   69 | static int header_check_pzh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_pzh.c:69:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   69 | static int header_check_pzh(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_qbb.o
file_qbb.c: In function ‘header_check_qbb’:
file_qbb.c:97:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   97 | static int header_check_qbb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_qbb.c:97:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   97 | static int header_check_qbb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_qbb.c: In function ‘header_check_qbw’:
file_qbb.c:136:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  136 | static int header_check_qbw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_qbb.c:136:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  136 | static int header_check_qbw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_qbb.c:136:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  136 | static int header_check_qbw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_qbb.c: In function ‘header_check_qbw2’:
file_qbb.c:151:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  151 | static int header_check_qbw2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_qbb.c:151:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  151 | static int header_check_qbw2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_qbb.c:151:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  151 | static int header_check_qbw2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_qdf.o
file_qdf.c: In function ‘header_check_qdf’:
file_qdf.c:45:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_qdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_qdf.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_qdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_qdf.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_qdf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_qkt.o
file_qkt.c: In function ‘header_check_qkt’:
file_qkt.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_qkt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_qkt.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_qkt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_qkt.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_qkt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_qkt.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_qkt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_qxd.o
file_qxd.c: In function ‘header_check_qxd’:
file_qxd.c:46:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   46 | static int header_check_qxd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_qxd.c:46:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_qxd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_qxd.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_qxd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_qxd.c:46:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_qxd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_qxd.c: In function ‘header_check_qxp’:
file_qxd.c:54:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   54 | static int header_check_qxp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_qxd.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_qxp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_qxd.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_qxp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_qxd.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_qxp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_r3d.o
file_r3d.c: In function ‘header_check_r3d’:
file_r3d.c:97:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   97 | static int header_check_r3d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_r3d.c:97:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   97 | static int header_check_r3d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_r3d.c:97:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   97 | static int header_check_r3d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_r3d.c: In function ‘header_check_r3d_v2’:
file_r3d.c:116:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  116 | static int header_check_r3d_v2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_r3d.c:116:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  116 | static int header_check_r3d_v2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_r3d.c:116:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  116 | static int header_check_r3d_v2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ra.o
file_ra.c: In function ‘header_check_ra’:
file_ra.c:83:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   83 | static int header_check_ra(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ra.c:83:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   83 | static int header_check_ra(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ra.c:83:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   83 | static int header_check_ra(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_raf.o
file_raf.c: In function ‘header_check_raf’:
file_raf.c:62:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   62 | static int header_check_raf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_raf.c:62:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   62 | static int header_check_raf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_raf.c:62:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   62 | static int header_check_raf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rar.o
file_rar.c: In function ‘header_check_rar15fmt’:
file_rar.c:53:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_rar15fmt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rar.c:53:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_rar15fmt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rar.c:53:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_rar15fmt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_rar.c: In function ‘header_check_rar50fmt’:
file_rar.c:69:82: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   69 | static int header_check_rar50fmt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rar.c:69:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   69 | static int header_check_rar50fmt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rar.c:69:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   69 | static int header_check_rar50fmt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_raw.o
file_raw.c: In function ‘header_check_raw’:
file_raw.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_raw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_raw.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_raw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_raw.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_raw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_raw.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_raw(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rdc.o
file_rdc.c: In function ‘header_check_rdc’:
file_rdc.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_rdc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_rdc.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_rdc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rdc.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_rdc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rdc.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_rdc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_reg.o
file_reg.c: In function ‘header_check_reg_9x’:
file_reg.c:72:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   72 | static int header_check_reg_9x(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_reg.c:72:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   72 | static int header_check_reg_9x(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_reg.c: In function ‘header_check_reg_nt’:
file_reg.c:106:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  106 | static int header_check_reg_nt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_reg.c:106:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  106 | static int header_check_reg_nt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_reg.c:106:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  106 | static int header_check_reg_nt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_res.o
file_res.c: In function ‘header_check_res’:
file_res.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_res(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_res.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_res(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_res.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_res(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_res.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_res(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rfp.o
file_rfp.c: In function ‘header_check_rfp’:
file_rfp.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_rfp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_rfp.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_rfp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rfp.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_rfp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rfp.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_rfp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_riff.o
file_riff.c: In function ‘header_check_riff’:
file_riff.c:216:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  216 | static int header_check_riff(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_riff.c:216:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  216 | static int header_check_riff(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_riff.c: In function ‘header_check_rifx’:
file_riff.c:317:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  317 | static int header_check_rifx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_riff.c:317:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  317 | static int header_check_rifx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_riff.c:317:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  317 | static int header_check_rifx(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rlv.o
file_rlv.c: In function ‘header_check_rlv’:
file_rlv.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_rlv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rlv.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_rlv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rlv.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_rlv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rm.o
file_rm.c: In function ‘header_check_rm’:
file_rm.c:55:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_rm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rm.c:55:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_rm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rm.c:55:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_rm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rns.o
file_rns.c: In function ‘header_check_rns’:
file_rns.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_rns(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_rns.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_rns(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rns.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_rns(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rns.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_rns(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rpm.o
file_rpm.c: In function ‘header_check_rpm’:
file_rpm.c:73:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   73 | static int header_check_rpm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rpm.c:73:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   73 | static int header_check_rpm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rpm.c:73:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   73 | static int header_check_rpm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rw2.o
file_rw2.c: In function ‘header_check_rw2’:
file_rw2.c:47:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_rw2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rw2.c:47:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_rw2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_rx2.o
file_rx2.c: In function ‘header_check_rx2’:
file_rx2.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_rx2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_rx2.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_rx2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_rx2.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_rx2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_save.o
file_save.c: In function ‘header_check_save’:
file_save.c:44:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_save(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_save.c:44:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_save(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_save.c:44:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_save(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_save.c:44:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_save(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ses.o
file_ses.c: In function ‘header_check_ses’:
file_ses.c:45:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_ses(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_ses.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_ses(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_ses.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_ses(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ses.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_ses(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_sgcta.o
file_sgcta.c: In function ‘header_check_sgcta’:
file_sgcta.c:44:52: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_sgcta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                               ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_sgcta.c:44:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_sgcta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_sgcta.c:44:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_sgcta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_sgcta.c:44:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_sgcta(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_shn.o
file_shn.c: In function ‘header_check_shn’:
file_shn.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_shn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_shn.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_shn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_shn.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_shn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_shn.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_shn(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_sib.o
file_sib.c: In function ‘header_check_sib’:
file_sib.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_sib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_sib.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_sib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_sib.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_sib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_sib.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_sib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_sig.o
file_sig.c: In function ‘header_check_sig’:
file_sig.c:83:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   83 | static int header_check_sig(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_sig.c:83:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   83 | static int header_check_sig(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_sig.c:83:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   83 | static int header_check_sig(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
In file included from file_sig.c:38:
file_sig.c: In function ‘parse_signature_file’:
file_sig.c:207:38: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  207 |         while(*pos!='\0' && !isspace(*pos))
      |                                      ^~~~
file_sig.c:216:21: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  216 |       while(isspace(*pos))
      |                     ^~~~
file_sig.c:236:20: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  236 |         if(isspace(*pos) || *pos=='\r' || *pos==',')
      |                    ^~~~
file_sig.c:336:26: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  336 |           while(isxdigit(*pos) && isxdigit(*(pos+1)))
      |                          ^~~~
file_sig.c:336:44: warning: array subscript has type ‘char’ [-Wchar-subscripts]
  336 |           while(isxdigit(*pos) && isxdigit(*(pos+1)))
      |                                            ^~~~~~~~
  CC       file_sit.o
file_sit.c: In function ‘header_check_sit’:
file_sit.c:47:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   47 | static int header_check_sit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_sit.c:47:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_sit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_sit.c:47:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_sit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_sit.c:47:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_sit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_skd.o
file_skd.c: In function ‘header_check_skd’:
file_skd.c:43:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   43 | static int header_check_skd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_skd.c:43:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   43 | static int header_check_skd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_skd.c:43:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   43 | static int header_check_skd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_skd.c:43:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   43 | static int header_check_skd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_skp.o
file_skp.c: In function ‘header_check_skp’:
file_skp.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_skp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_skp.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_skp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_skp.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_skp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_skp.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_skp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_snag.o
file_snag.c: In function ‘header_check_snag’:
file_snag.c:50:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   50 | static int header_check_snag(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_snag.c:50:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   50 | static int header_check_snag(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_snag.c:50:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   50 | static int header_check_snag(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_snag.c:50:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   50 | static int header_check_snag(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_sp3.o
file_sp3.c: In function ‘header_check_sp3’:
file_sp3.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_sp3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_sp3.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_sp3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_sp3.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_sp3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_spe.o
file_spe.c: In function ‘header_check_spe’:
file_spe.c:247:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  247 | static int header_check_spe(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_spe.c:247:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  247 | static int header_check_spe(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_spe.c:247:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  247 | static int header_check_spe(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_spf.o
file_spf.c: In function ‘header_check_spf’:
file_spf.c:86:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   86 | static int header_check_spf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_spf.c:86:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   86 | static int header_check_spf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_spf.c:86:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   86 | static int header_check_spf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_spf.c:86:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   86 | static int header_check_spf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_spss.o
file_spss.c: In function ‘header_check_spss’:
file_spss.c:44:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_spss(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_spss.c:44:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_spss(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_spss.c:44:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_spss(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_spss.c:44:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_spss(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_sql.o
file_sql.c: In function ‘header_check_sqlite’:
file_sql.c:74:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   74 | static int header_check_sqlite(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_sql.c:74:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   74 | static int header_check_sqlite(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_sql.c:74:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   74 | static int header_check_sqlite(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_sqm.o
file_sqm.c: In function ‘header_check_sqm’:
file_sqm.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_sqm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_sqm.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_sqm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_sqm.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_sqm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_sqm.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_sqm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_steuer2014.o
file_steuer2014.c: In function ‘header_check_steuer’:
file_steuer2014.c:54:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_steuer(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_steuer2014.c:54:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_steuer(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_steuer2014.c:54:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_steuer(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_stl.o
file_stl.c: In function ‘header_check_stl’:
file_stl.c:46:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_stl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_stl.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_stl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_stl.c:46:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_stl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_stu.o
file_stu.c: In function ‘header_check_stuffit’:
file_stu.c:45:54: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_stuffit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                 ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_stu.c:45:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_stuffit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_stu.c:45:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_stuffit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_stu.c:45:154: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_stuffit(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                   ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_studio.o
file_studio.c: In function ‘header_check_studio’:
file_studio.c:52:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_studio(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_studio.c:52:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_studio(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_studio.c:52:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_studio(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_swf.o
file_swf.c: In function ‘header_check_swfc’:
file_swf.c:89:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   89 | static int header_check_swfc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_swf.c:89:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   89 | static int header_check_swfc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_swf.c:89:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   89 | static int header_check_swfc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_swf.c: In function ‘header_check_swf’:
file_swf.c:159:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  159 | static int header_check_swf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_swf.c:159:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  159 | static int header_check_swf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_swf.c:159:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  159 | static int header_check_swf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_swf.c: In function ‘header_check_swfz’:
file_swf.c:192:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  192 | static int header_check_swfz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_swf.c:192:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  192 | static int header_check_swfz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_swf.c:192:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  192 | static int header_check_swfz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_tar.o
In file included from file_tar.c:30:
file_tar.c: In function ‘header_check_tar’:
file_tar.c:70:24: warning: array subscript has type ‘char’ [-Wchar-subscripts]
   70 |   if(!isspace(h->chksum[0]) && !((unsigned) (h->chksum[0]) - '0' <= 7))
      |               ~~~~~~~~~^~~
file_tar.c:67:70: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   67 | int header_check_tar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                   ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tar.c:67:102: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   67 | int header_check_tar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                   ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_tax.o
file_tax.c: In function ‘header_check_tax’:
file_tax.c:45:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   45 | static int header_check_tax(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_tax.c:45:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   45 | static int header_check_tax(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tax.c:45:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   45 | static int header_check_tax(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tax.c:45:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   45 | static int header_check_tax(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_tg.o
file_tg.c: In function ‘header_check_tg’:
file_tg.c:44:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_tg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_tg.c:44:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_tg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tg.c:44:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_tg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tg.c:44:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_tg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_tib.o
file_tib.c: In function ‘header_check_tib’:
file_tib.c:103:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  103 | static int header_check_tib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_tib.c:103:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  103 | static int header_check_tib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tib.c:103:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  103 | static int header_check_tib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tib.c:103:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  103 | static int header_check_tib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_tib.c: In function ‘header_check_tib2’:
file_tib.c:110:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  110 | static int header_check_tib2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_tib.c:110:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  110 | static int header_check_tib2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tib.c:110:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  110 | static int header_check_tib2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tib.c:110:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  110 | static int header_check_tib2(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_tiff.o
  CC       file_tiff_be.o
file_tiff_be.c: In function ‘find_tag_from_tiff_header_be_aux’:
file_tiff_be.c:54:16: warning: taking address of packed member of ‘struct ifd_header’ may result in an unaligned pointer value [-Waddress-of-packed-member]
   54 |   for(i=0, tmp=&hdr->ifd;
      |                ^~~~~~~~~
file_tiff_be.c: In function ‘header_check_tiff_be’:
file_tiff_be.c:358:26: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  358 |             if(new_offset==-1)
      |                          ^~
file_tiff_be.c:367:26: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  367 |             if(new_offset==-1)
      |                          ^~
file_tiff_be.c:411:28: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  411 |               if(new_offset==-1)
      |                            ^~
file_tiff_be.c:454:11: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  454 |     if(tmp==-1)
      |           ^~
file_tiff_be.c:462:11: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  462 |     if(tmp==-1)
      |           ^~
file_tiff_be.c:471:19: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  471 |     if(new_offset != -1 && max_offset < new_offset)
      |                   ^~
file_tiff_be.c: In function ‘header_check_tiff_be_new’:
file_tiff_be.c:477:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  477 | int header_check_tiff_be_new(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_tiff_le.o
file_tiff_le.c: In function ‘find_tag_from_tiff_header_le_aux’:
file_tiff_le.c:55:16: warning: taking address of packed member of ‘struct ifd_header’ may result in an unaligned pointer value [-Waddress-of-packed-member]
   55 |   for(i=0, tmp=&hdr->ifd;
      |                ^~~~~~~~~
file_tiff_le.c: In function ‘header_check_tiff_le’:
file_tiff_le.c:359:26: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  359 |             if(new_offset==-1)
      |                          ^~
file_tiff_le.c:375:26: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  375 |             if(new_offset==-1)
      |                          ^~
file_tiff_le.c:419:28: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  419 |               if(new_offset==-1)
      |                            ^~
file_tiff_le.c:462:11: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  462 |     if(tmp==-1)
      |           ^~
file_tiff_le.c:470:11: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  470 |     if(tmp==-1)
      |           ^~
file_tiff_le.c:479:19: warning: comparison of integer expressions of different signedness: ‘uint64_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
  479 |     if(new_offset != -1 && max_offset < new_offset)
      |                   ^~
file_tiff_le.c: In function ‘header_check_tiff_le_new’:
file_tiff_le.c:485:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  485 | int header_check_tiff_le_new(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_tivo.o
file_tivo.c: In function ‘header_check_tivo’:
file_tivo.c:52:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_tivo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tivo.c:52:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_tivo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tivo.c:52:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_tivo(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_torrent.o
file_torrent.c: In function ‘header_check_torrent’:
file_torrent.c:44:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_torrent(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_torrent.c:44:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_torrent(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_torrent.c:44:154: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_torrent(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                   ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_tph.o
file_tph.c: In function ‘header_check_tph’:
file_tph.c:56:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   56 | static int header_check_tph(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tph.c:56:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   56 | static int header_check_tph(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tph.c:56:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   56 | static int header_check_tph(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_tpl.o
file_tpl.c: In function ‘header_check_tpl’:
file_tpl.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_tpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_tpl.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_tpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tpl.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_tpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tpl.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_tpl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_ttf.o
file_ttf.c: In function ‘header_check_ttf’:
file_ttf.c:74:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   74 | static int header_check_ttf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_ttf.c:74:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   74 | static int header_check_ttf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_txt.o
file_txt.c: In function ‘header_check_ttd’:
file_txt.c:531:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  531 | static int header_check_ttd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:531:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  531 | static int header_check_ttd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:531:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  531 | static int header_check_ttd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_ers’:
file_txt.c:548:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  548 | static int header_check_ers(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_txt.c:548:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  548 | static int header_check_ers(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:548:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  548 | static int header_check_ers(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:548:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  548 | static int header_check_ers(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_ics’:
file_txt.c:558:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  558 | static int header_check_ics(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:558:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  558 | static int header_check_ics(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_perlm’:
file_txt.c:587:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  587 | static int header_check_perlm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:587:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  587 | static int header_check_perlm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_dc’:
file_txt.c:616:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  616 | static int header_check_dc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:616:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  616 | static int header_check_dc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:616:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  616 | static int header_check_dc(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_html’:
file_txt.c:702:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  702 | static int header_check_html(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:702:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  702 | static int header_check_html(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c: In function ‘header_check_vbm’:
file_txt.c:729:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  729 | static int header_check_vbm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_txt.c:729:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  729 | static int header_check_vbm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:729:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  729 | static int header_check_vbm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:729:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  729 | static int header_check_vbm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_xml_utf8’:
file_txt.c:772:114: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  772 | static int header_check_xml_utf8(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                               ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:772:155: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  772 | static int header_check_xml_utf8(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_xml_utf16’:
file_txt.c:802:56: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  802 | static int header_check_xml_utf16(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                   ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_txt.c:802:83: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  802 | static int header_check_xml_utf16(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:802:115: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  802 | static int header_check_xml_utf16(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c: In function ‘header_check_xml’:
file_txt.c:813:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  813 | static int header_check_xml(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:813:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  813 | static int header_check_xml(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_rtf’:
file_txt.c:912:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  912 | static int header_check_rtf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:912:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  912 | static int header_check_rtf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c: In function ‘header_check_xmp’:
file_txt.c:930:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  930 | static int header_check_xmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:930:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  930 | static int header_check_xmp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c: In function ‘header_check_thunderbird’:
file_txt.c:957:85: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  957 | static int header_check_thunderbird(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                  ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:957:117: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  957 | static int header_check_thunderbird(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                  ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c: In function ‘header_check_mbox’:
file_txt.c:974:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  974 | static int header_check_mbox(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:974:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  974 | static int header_check_mbox(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c: In function ‘header_check_fasttxt’:
file_txt.c:1000:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
 1000 | static int header_check_fasttxt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:1000:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
 1000 | static int header_check_fasttxt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:1000:154: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
 1000 | static int header_check_fasttxt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                   ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
In file included from file_txt.c:35:
file_txt.c: In function ‘is_ini’:
file_txt.c:1035:17: warning: array subscript has type ‘char’ [-Wchar-subscripts]
 1035 |     if(!isalnum(*src) && *src!=' ')
      |                 ^~~~
file_txt.c: In function ‘header_check_smil’:
file_txt.c:1433:51: warning: unused parameter ‘buffer’ [-Wunused-parameter]
 1433 | static int header_check_smil(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                              ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_txt.c:1433:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
 1433 | static int header_check_smil(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:1433:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
 1433 | static int header_check_smil(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:1433:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
 1433 | static int header_check_smil(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_stl’:
file_txt.c:1444:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
 1444 | static int header_check_stl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:1444:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
 1444 | static int header_check_stl(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_svg’:
file_txt.c:1458:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
 1458 | static int header_check_svg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_txt.c:1458:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
 1458 | static int header_check_svg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_txt.c:1458:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
 1458 | static int header_check_svg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:1458:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
 1458 | static int header_check_svg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_txt.c: In function ‘header_check_snz’:
file_txt.c:1467:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
 1467 | static int header_check_snz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_txt.c:1467:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
 1467 | static int header_check_snz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_tz.o
file_tz.c: In function ‘header_check_tz’:
file_tz.c:48:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   48 | static int header_check_tz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_tz.c:48:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   48 | static int header_check_tz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_tz.c:48:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   48 | static int header_check_tz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_tz.c:48:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   48 | static int header_check_tz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_v2i.o
file_v2i.c: In function ‘header_check_v2i’:
file_v2i.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_v2i(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_v2i.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_v2i(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_v2i.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_v2i(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_vault.o
file_vault.c: In function ‘header_check_vault’:
file_vault.c:67:52: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   67 | static int header_check_vault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                               ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_vault.c:67:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   67 | static int header_check_vault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vault.c:67:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   67 | static int header_check_vault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vault.c:67:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   67 | static int header_check_vault(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_vdi.o
file_vdi.c: In function ‘header_check_vdi’:
file_vdi.c:81:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   81 | static int header_check_vdi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vdi.c:81:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   81 | static int header_check_vdi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vdi.c:81:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   81 | static int header_check_vdi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_vdj.o
file_vdj.c: In function ‘header_check_vdj’:
file_vdj.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_vdj(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_vdj.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_vdj(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vdj.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_vdj(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vdj.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_vdj(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_veg.o
file_veg.c: In function ‘header_check_veg’:
file_veg.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_veg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_veg.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_veg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_veg.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_veg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_vfb.o
file_vfb.c: In function ‘header_check_vfb’:
file_vfb.c:53:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   53 | static int header_check_vfb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_vfb.c:53:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   53 | static int header_check_vfb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vfb.c:53:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   53 | static int header_check_vfb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vfb.c:53:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   53 | static int header_check_vfb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_vib.o
file_vib.c: In function ‘header_check_vib’:
file_vib.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_vib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_vib.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_vib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vib.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_vib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vib.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_vib(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_vmdk.o
file_vmdk.c: In function ‘header_check_vmdk3’:
file_vmdk.c:76:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   76 | static int header_check_vmdk3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vmdk.c:76:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   76 | static int header_check_vmdk3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vmdk.c:76:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   76 | static int header_check_vmdk3(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_vmdk.c: In function ‘header_check_vmdk4’:
file_vmdk.c:92:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   92 | static int header_check_vmdk4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vmdk.c:92:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   92 | static int header_check_vmdk4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vmdk.c:92:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   92 | static int header_check_vmdk4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_vmg.o
file_vmg.c: In function ‘header_check_vmg’:
file_vmg.c:54:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   54 | static int header_check_vmg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_vmg.c:54:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   54 | static int header_check_vmg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_vmg.c:54:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   54 | static int header_check_vmg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_vmg.c:54:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   54 | static int header_check_vmg(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wallet.o
file_wallet.c: In function ‘header_check_wallet’:
file_wallet.c:44:53: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_wallet(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_wallet.c:44:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_wallet(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wallet.c:44:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_wallet(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wallet.c:44:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_wallet(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wdp.o
file_wdp.c: In function ‘header_check_wdp’:
file_wdp.c:47:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_wdp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wdp.c:47:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_wdp(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wee.o
file_wee.c: In function ‘header_check_wee’:
file_wee.c:52:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   52 | static int header_check_wee(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wee.c:52:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   52 | static int header_check_wee(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wee.c:52:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   52 | static int header_check_wee(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wim.o
file_wim.c: In function ‘header_check_wim’:
file_wim.c:78:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   78 | static int header_check_wim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wim.c:78:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   78 | static int header_check_wim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wim.c:78:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   78 | static int header_check_wim(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_win.o
file_win.c: In function ‘header_check_win’:
file_win.c:69:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   69 | static int header_check_win(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_win.c:69:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   69 | static int header_check_win(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_win.c:69:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   69 | static int header_check_win(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_win.c:69:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   69 | static int header_check_win(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wks.o
file_wks.c: In function ‘header_check_wk4’:
file_wks.c:55:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   55 | static int header_check_wk4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_wks.c:55:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   55 | static int header_check_wk4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wks.c:55:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   55 | static int header_check_wk4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wks.c:55:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   55 | static int header_check_wk4(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_wks.c: In function ‘header_check_wks’:
file_wks.c:62:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   62 | static int header_check_wks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_wks.c:62:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   62 | static int header_check_wks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wks.c:62:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   62 | static int header_check_wks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wks.c:62:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   62 | static int header_check_wks(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wld.o
file_wld.c: In function ‘header_check_wld’:
file_wld.c:66:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   66 | static int header_check_wld(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wld.c:66:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   66 | static int header_check_wld(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wld.c:66:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   66 | static int header_check_wld(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wmf.o
file_wmf.c: In function ‘header_check_wmf’:
file_wmf.c:58:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   58 | static int header_check_wmf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wmf.c:58:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   58 | static int header_check_wmf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wmf.c:58:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   58 | static int header_check_wmf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_wmf.c: In function ‘header_check_other_wmf’:
file_wmf.c:73:83: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   73 | static int header_check_other_wmf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wmf.c:73:115: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   73 | static int header_check_other_wmf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wmf.c:73:156: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   73 | static int header_check_other_wmf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                     ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wnk.o
file_wnk.c: In function ‘header_check_wnk’:
file_wnk.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_wnk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_wnk.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_wnk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wnk.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_wnk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wnk.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_wnk(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_woff.o
file_woff.c: In function ‘header_check_woff’:
file_woff.c:62:78: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   62 | static int header_check_woff(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_woff.c:62:110: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   62 | static int header_check_woff(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                           ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_woff.c:62:151: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   62 | static int header_check_woff(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wpb.o
file_wpb.c: In function ‘header_check_wpb’:
file_wpb.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_wpb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_wpb.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_wpb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wpb.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_wpb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wpb.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_wpb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wpd.o
file_wpd.c: In function ‘header_check_wpd’:
file_wpd.c:60:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   60 | static int header_check_wpd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wpd.c:60:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   60 | static int header_check_wpd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wpd.c:60:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   60 | static int header_check_wpd(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_wtv.o
file_wtv.c: In function ‘header_check_wtv’:
file_wtv.c:47:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_wtv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wtv.c:47:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_wtv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
  CC       file_wv.o
file_wv.c: In function ‘header_check_wv’:
file_wv.c:66:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   66 | static int header_check_wv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_wv.c:66:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   66 | static int header_check_wv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_wv.c:66:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   66 | static int header_check_wv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_x3f.o
file_x3f.c: In function ‘header_check_x3f’:
file_x3f.c:59:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   59 | static int header_check_x3f(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
  CC       file_x3i.o
file_x3i.c: In function ‘header_check_x3i’:
file_x3i.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_x3i(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_x3i.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_x3i(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_x3i.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_x3i(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_x3i.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_x3i(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_x4a.o
file_x4a.c: In function ‘header_check_ysfc100’:
file_x4a.c:77:81: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   77 | static int header_check_ysfc100(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_x4a.c:77:113: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   77 | static int header_check_ysfc100(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                              ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_x4a.c:77:154: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   77 | static int header_check_ysfc100(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                   ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xar.o
file_xar.c: In function ‘header_check_xar’:
file_xar.c:58:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   58 | static int header_check_xar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xar.c:58:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   58 | static int header_check_xar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xar.c:58:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   58 | static int header_check_xar(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xcf.o
file_xcf.c: In function ‘header_check_xcf’:
file_xcf.c:57:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   57 | static int header_check_xcf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xcf.c:57:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   57 | static int header_check_xcf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xcf.c:57:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   57 | static int header_check_xcf(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xfi.o
file_xfi.c: In function ‘header_check_xfi’:
file_xfi.c:44:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_xfi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_xfi.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_xfi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xfi.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_xfi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xfi.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_xfi(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xfs.o
file_xfs.c: In function ‘header_check_xfs_sb’:
file_xfs.c:47:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_xfs_sb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xfs.c:47:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_xfs_sb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xfs.c:47:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_xfs_sb(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_xfs.c: In function ‘data_check_stopasap’:
file_xfs.c:63:62: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   63 | static data_check_t data_check_stopasap(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                         ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_xfs.c:63:89: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   63 | static data_check_t data_check_stopasap(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                                                      ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xfs.c:63:119: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   63 | static data_check_t data_check_stopasap(const unsigned char *buffer, const unsigned int buffer_size, file_recovery_t *file_recovery)
      |                                                                                                      ~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_xfs.c: In function ‘header_save_xfs’:
file_xfs.c:68:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   68 | static int header_save_xfs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_xfs.c:68:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   68 | static int header_save_xfs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xfs.c:68:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   68 | static int header_save_xfs(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
file_xfs.c: In function ‘header_check_xfs_inode’:
file_xfs.c:118:83: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  118 | static int header_check_xfs_inode(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xfs.c:118:156: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  118 | static int header_check_xfs_inode(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                     ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xm.o
file_xm.c: In function ‘header_check_xm’:
file_xm.c:181:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  181 | static int header_check_xm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_xm.c:181:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  181 | static int header_check_xm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xm.c:181:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  181 | static int header_check_xm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xm.c:181:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  181 | static int header_check_xm(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xml.o
file_xml.c: In function ‘header_check_xml’:
file_xml.c:81:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   81 | static int header_check_xml(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_xml.c:81:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   81 | static int header_check_xml(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xml.c:81:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   81 | static int header_check_xml(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xml.c:81:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   81 | static int header_check_xml(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xsv.o
file_xsv.c: In function ‘header_check_xsv’:
file_xsv.c:46:50: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   46 | static int header_check_xsv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                             ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_xsv.c:46:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_xsv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xsv.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_xsv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xsv.c:46:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_xsv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xpt.o
file_xpt.c: In function ‘header_check_xpt’:
file_xpt.c:56:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   56 | static int header_check_xpt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xpt.c:56:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   56 | static int header_check_xpt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xpt.c:56:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   56 | static int header_check_xpt(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xv.o
file_xv.c: In function ‘header_check_xv’:
file_xv.c:47:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   47 | static int header_check_xv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xv.c:47:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   47 | static int header_check_xv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xv.c:47:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   47 | static int header_check_xv(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_xz.o
file_xz.c: In function ‘header_check_xz’:
file_xz.c:50:49: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   50 | static int header_check_xz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                            ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_xz.c:50:76: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   50 | static int header_check_xz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_xz.c:50:108: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   50 | static int header_check_xz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                         ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_xz.c:50:149: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   50 | static int header_check_xz(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                              ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_z2d.o
file_z2d.c: In function ‘header_check_z2d’:
file_z2d.c:46:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   46 | static int header_check_z2d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_z2d.c:46:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   46 | static int header_check_z2d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_z2d.c:46:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   46 | static int header_check_z2d(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_zcode.o
file_zcode.c: In function ‘header_check_zcode’:
file_zcode.c:44:52: warning: unused parameter ‘buffer’ [-Wunused-parameter]
   44 | static int header_check_zcode(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                               ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_zcode.c:44:79: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_zcode(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_zcode.c:44:111: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_zcode(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                            ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_zcode.c:44:152: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_zcode(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                 ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_zip.o
file_zip.c: In function ‘header_check_winzip’:
file_zip.c:882:53: warning: unused parameter ‘buffer’ [-Wunused-parameter]
  882 | static int header_check_winzip(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                ~~~~~~~~~~~~~~~~~~~~~^~~~~~
file_zip.c:882:80: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
  882 | static int header_check_winzip(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_zip.c:882:112: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
  882 | static int header_check_winzip(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                             ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_zip.c:882:153: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
  882 | static int header_check_winzip(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                                  ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       file_zpr.o
file_zpr.c: In function ‘header_check_zpr’:
file_zpr.c:44:77: warning: unused parameter ‘buffer_size’ [-Wunused-parameter]
   44 | static int header_check_zpr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~
file_zpr.c:44:109: warning: unused parameter ‘safe_header_only’ [-Wunused-parameter]
   44 | static int header_check_zpr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                          ~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
file_zpr.c:44:150: warning: unused parameter ‘file_recovery’ [-Wunused-parameter]
   44 | static int header_check_zpr(const unsigned char *buffer, const unsigned int buffer_size, const unsigned int safe_header_only, const file_recovery_t *file_recovery, file_recovery_t *file_recovery_new)
      |                                                                                                                               ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
  CC       partgptro.o
partgptro.c: In function ‘write_part_gpt’:
partgptro.c:32:28: warning: unused parameter ‘disk_car’ [-Wunused-parameter]
   32 | int write_part_gpt(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                    ~~~~~~~~^~~~~~~~
partgptro.c:32:57: warning: unused parameter ‘list_part’ [-Wunused-parameter]
   32 | int write_part_gpt(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                      ~~~~~~~~~~~~~~~~~~~^~~~~~~~~
partgptro.c:32:92: warning: unused parameter ‘verbose’ [-Wunused-parameter]
   32 | int write_part_gpt(disk_t *disk_car, const list_part_t *list_part, const int ro, const int verbose)
      |                                                                                  ~~~~~~~~~~^~~~~~~
/usr/bin/windres --include-dir . icon_ph.rc icon_ph.o
  CC       suspend_no.o
  CCLD     photorec.exe
  CC       fidentify.o
  CCLD     fidentify.exe
make[2]: Leaving directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska/src'
make[2]: Entering directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska'
make[2]: Leaving directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska'
make[1]: Leaving directory '/cygdrive/c/Users/yaken/OneDrive/デスクトップ/git/yakenohara/testdiska'
```
