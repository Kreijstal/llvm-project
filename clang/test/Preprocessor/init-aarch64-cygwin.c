// RUN: %clang_cc1 -E -dM -triple=aarch64-pc-cygwin -x c /dev/null | FileCheck %s

// CHECK-DAG: #define __CYGWIN__ 1
// CHECK-DAG: #define __CYGWIN64__ 1
// CHECK-DAG: #define __SIZEOF_POINTER__ 8
// CHECK-DAG: #define __SIZEOF_LONG__ 8
// CHECK-DAG: #define __SIZEOF_LONG_DOUBLE__ 16
// CHECK-DAG: #define __SIZEOF_WCHAR_T__ 2
// CHECK-DAG: #define __INT64_TYPE__ long int
// CHECK-DAG: #define __SIZE_TYPE__ long unsigned int
// CHECK-DAG: #define __WCHAR_TYPE__ unsigned short
