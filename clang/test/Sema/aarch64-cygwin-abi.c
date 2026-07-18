// RUN: %clang_cc1 -triple aarch64-pc-cygwin -fsyntax-only -verify %s
// expected-no-diagnostics

_Static_assert(sizeof(long) == 8, "Cygwin ARM64 must be LP64");
_Static_assert(sizeof(void *) == 8, "Cygwin ARM64 pointer width");
_Static_assert(sizeof(long double) == 16, "Cygwin ARM64 long double ABI");
_Static_assert(_Alignof(long double) == 16, "Cygwin ARM64 long double alignment");
