# idris-9front-backend

9front ape (pcc) backend for Idris.

Next Step: Build a native Idris port.

Usage instructions with posix/ape:

```

# build the hello.c file on linux:
git clone git@github.com:joe9/idris-9front-backend.git idris-9front-backend
cd idris-9front-backend/test
# Please ensure that you are using something more recent than this commit of idris: 36aaf7f6f957454b3c5e1fe1c3afa6882c04f004
idris --codegenonly --codegen C hello.idr -o hello.c

# on 9front
cd idris-9front-backend
mk
./8.hello.out


```

Reasons for choosing Idris as the frontend
------------------------------------------

1. Uniqueness Types
2. Cleaner syntax
3. Effects
4. Native dependent types (not used much, but, is a nice to have)

Reasons for choosing GHC Core and STG for the Intermediate Representation
-------------------------------------------------------------------------

1. Types
