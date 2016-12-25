#include "math.h"
#include "idris_rts.h"
#include "idris_bitstring.h"
#include "idris_stdfgn.h"
void _idris_assert_95_unreachable(VM*, VAL*);
void _idris_call_95__95_IO(VM*, VAL*);
void _idris_idris_95_crash(VM*, VAL*);
void _idris_io_95_pure(VM*, VAL*);
void _idris_Main_46_main(VM*, VAL*);
void _idris_mkForeignPrim(VM*, VAL*);
void _idris_prim_95__95_asPtr(VM*, VAL*);
void _idris_prim_95__95_eqManagedPtr(VM*, VAL*);
void _idris_prim_95__95_eqPtr(VM*, VAL*);
void _idris_prim_95__95_null(VM*, VAL*);
void _idris_prim_95__95_peek16(VM*, VAL*);
void _idris_prim_95__95_peek32(VM*, VAL*);
void _idris_prim_95__95_peek64(VM*, VAL*);
void _idris_prim_95__95_peek8(VM*, VAL*);
void _idris_prim_95__95_peekDouble(VM*, VAL*);
void _idris_prim_95__95_peekPtr(VM*, VAL*);
void _idris_prim_95__95_peekSingle(VM*, VAL*);
void _idris_prim_95__95_poke16(VM*, VAL*);
void _idris_prim_95__95_poke32(VM*, VAL*);
void _idris_prim_95__95_poke64(VM*, VAL*);
void _idris_prim_95__95_poke8(VM*, VAL*);
void _idris_prim_95__95_pokeDouble(VM*, VAL*);
void _idris_prim_95__95_pokePtr(VM*, VAL*);
void _idris_prim_95__95_pokeSingle(VM*, VAL*);
void _idris_prim_95__95_ptrOffset(VM*, VAL*);
void _idris_prim_95__95_readFile(VM*, VAL*);
void _idris_prim_95__95_registerPtr(VM*, VAL*);
void _idris_prim_95__95_sizeofPtr(VM*, VAL*);
void _idris_prim_95__95_stderr(VM*, VAL*);
void _idris_prim_95__95_stdin(VM*, VAL*);
void _idris_prim_95__95_stdout(VM*, VAL*);
void _idris_prim_95__95_vm(VM*, VAL*);
void _idris_prim_95__95_writeFile(VM*, VAL*);
void _idris_run_95__95_IO(VM*, VAL*);
void _idris_unsafePerformPrimIO(VM*, VAL*);
void _idris__123_APPLY0_125_(VM*, VAL*);
void _idris__123_APPLY20_125_(VM*, VAL*);
void _idris__123_EVAL0_125_(VM*, VAL*);
void _idris__123_runMain0_125_(VM*, VAL*);
void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Char_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Int_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Integer_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_ManagedPtr_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Ptr_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_String_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Void_95__95__95_casefun_95__95_Void_95__95__95_case(VM*, VAL*);
void _idris_Void_95_elim(VM*, VAL*);
void _idris_assert_95_unreachable(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_call_95__95_IO(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(3) = NULL_CON(0);
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_idris_95_crash(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_io_95_pure(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL_CON(0);
    TOPBASE(0);
    REBASE;
}

void _idris_Main_46_main(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(3);
    ADDTOP(3);
    LOC(0) = NULL;
    LOC(1) = NULL;
    LOC(2) = NULL;
    allocCon(REG1, vm, 65647, 3, 0);
    SETARG(REG1, 0, LOC(0)); SETARG(REG1, 1, LOC(1)); SETARG(REG1, 2, LOC(2)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_mkForeignPrim(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_asPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, GETMPTR(LOC(0)));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_eqManagedPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(GETMPTR(LOC(0)) == GETMPTR(LOC(1))));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_eqPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(GETPTR(LOC(0)) == GETPTR(LOC(1))));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_null(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, NULL);
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_peek16(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB16(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_peek32(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB32(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_peek64(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB64(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_peek8(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB8(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_peekDouble(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekDouble(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_peekPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekPtr(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_peekSingle(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekSingle(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_poke16(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB16(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_poke32(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB32(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_poke64(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB64(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_poke8(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB8(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_pokeDouble(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeDouble(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_pokePtr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokePtr(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_pokeSingle(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeSingle(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_ptrOffset(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, GETPTR(LOC(0)) + GETINT(LOC(1)));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_readFile(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_readStr(vm, GETPTR(LOC(1)));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_registerPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKMPTR(vm, GETPTR(LOC(0)), GETINT(LOC(1)));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_sizeofPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT(sizeof(void*));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_stderr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, stderr);
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_stdin(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, stdin);
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_stdout(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, stdout);
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_vm(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, vm);
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_writeFile(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(idris_writeStr(GETPTR(LOC(1)),GETSTR(LOC(2)))));
    TOPBASE(0);
    REBASE;
}

void _idris_run_95__95_IO(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(2) = NULL_CON(0);
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_unsafePerformPrimIO(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris__123_APPLY0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(3);
    ADDTOP(3);
    switch(TAG(LOC(0))) {
    case 65647:
        PROJECT(vm, LOC(0), 2, 3);
        RESERVE(4);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        TOP(3) = LOC(1);
        SLIDE(vm, 4);
        TOPBASE(4);
        TAILCALL(_idris_io_95_pure);
        break;
    default:
        RVAL = NULL;
        TOPBASE(0);
        REBASE;
        break;
    }
}

void _idris__123_APPLY20_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris__123_EVAL0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    switch(TAG(LOC(0))) {
    default:
        RVAL = LOC(0);
        TOPBASE(0);
        REBASE;
        break;
    }
}

void _idris__123_runMain0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    STOREOLD;
    BASETOP(0);
    CALL(_idris_Main_46_main);
    LOC(0) = RVAL;
    LOC(1) = NULL_CON(0);
    RESERVE(2);
    TOP(0) = LOC(0);
    TOP(1) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(0) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(0);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris__123_EVAL0_125_);
}

void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Char_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Int_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Integer_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_ManagedPtr_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Ptr_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_String_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Void_95__95__95_casefun_95__95_Void_95__95__95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Void_95_elim(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

