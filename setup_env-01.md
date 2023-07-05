# Cygwin Build 環境セットアップ

Cygwin のインストーラーを実行し、`Select Packages` 画面で以下を選択  

 - gcc-core 11.4.0-1  
 - autoconf 13-1  
 - automake 11-1  
 - libtool 2.4.7-1  
 - libncurses++w10 6.4-3.20230114  
 - libncurses-devel 6.4-3.20230114  
 - libuuid-devel 2.33.1-2  
 - libuuid1 2.33.1-2  
 - uuidd 2.33.1-2  
 - make 4.4.1-2  

## Note

autoconf 15-1 をインストールすると、`./configure` 実行時に `PKG_PROG_PKG_CONFIG: command not found` となる為注意  

# Build

Note: (https://www.cgsecurity.org/wiki/Developers)参照  

```
$ mkdir config
$ autoreconf --install -W all -I config # -> 実行結果は (setup_env-02-autoreconf.md) 参照
$ ./configure                           # -> 実行結果は (setup_env-03-dot_slash_configure.md) 参照
$ make
```



# .exe の実行準備




-- Omitting --

"C:\cygwin64\bin" を環境変数に追加

