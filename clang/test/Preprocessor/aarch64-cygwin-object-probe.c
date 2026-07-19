_Static_assert(sizeof(long) == 8, "Cygwin ARM64 must be LP64");
_Static_assert(sizeof(void *) == 8, "Cygwin ARM64 pointer width");
_Static_assert(sizeof(long double) == 16, "Cygwin ARM64 long double ABI");

long cygwin_arm64_object_probe(long value) { return value + 1; }
