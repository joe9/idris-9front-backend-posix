</sys/src/ape/config

# build the hello.c file on linux using the command:
#   cd /home/j/dev/apps/plan9/custom/idris-9front-backend-posix/Idris-dev
#   stack build # if you do not have idris executable
#   TMPDIR=/tmp/ghc stack exec idris -- --codegenonly --codegen C ../test/hello.idr -o ../test/hello.c

all:
        rm -rf patched-rts
        mkdir -p patched-rts/
        cp Idris-dev/rts/*.[ch] patched-rts/
        rm patched-rts/libtest.c
        cp src/posix-rts/*.[ch] patched-rts/
        ape/patch --verbose '--directory=patched-rts' '--input=../src/posix-rts/idris_opts_function_without_return.patch'
        ape/patch --verbose '--directory=patched-rts' '--input=../src/posix-rts/idris_stdfgn_avoid_timeval_usage.patch'
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -D_SUSV2_SOURCE -c patched-rts/*.c
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -D_SUSV2_SOURCE -Ipatched-rts/ -c test/*.c
        pcc -+ -D_POSIX_SOURCE -D_BSD_EXTENSION '-DIDRIS_TARGET_OS="9front"' '-DIDRIS_TARGET_TRIPLE="386"' -o 8.hello.out *.$O
        ./8.hello.out

install:
        mk
        cp hello /$objtype/bin

clean:
   rm -rf patched-rts
   rm *.$O
   rm *.out
