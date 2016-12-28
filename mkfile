</sys/src/ape/config
all:
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -c src/*.c
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -o hello *.$O
install:
        mk
        cp hello /$objtype/bin
clean:
   rm *.$O
   rm *.out
