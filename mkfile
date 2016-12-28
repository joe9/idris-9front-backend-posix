</sys/src/ape/config
all:
        pcc -D_POSIX_SOURCE -D_BSD_EXTENSION -c src/*.c -c app/*.c
        pcc -D_POSIX_SOURCE -D_BSD_EXTENSION -o cfrotz *.$O
install:
        mk
        cp hello /$objtype/bin
clean:
   rm *.out
   rm *.$O
