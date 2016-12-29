</sys/src/ape/config
all:
        rm -rf patched-rts
        mkdir -p patched-rts/
        cp Idris-dev/rts/*.[ch] patched-rts/
        rm patched-rts/libtest.c
        cp src/*.[ch] patched-rts/
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -D_SUSV2_SOURCE -c patched-rts/*.c
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -D_SUSV2_SOURCE -Ipatched-rts/ -c test/*.c
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -o 8.hello.out *.$O
install:
        mk
        cp hello /$objtype/bin
clean:
   rm *.$O
   rm *.out
