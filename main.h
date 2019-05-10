#ifndef __HEAD_MAIN_H__
#define __HEAD_MAIN_H__
#include <cstdio>
 
#include "test_c/a.h"
 
 
extern "C" {
 
void dll_func() {
    foo_class::_.m += 100;
    printf("&foo_class::_ = 0x%llx, foo_class::_.m = %d\n", &foo_class::_, foo_class::_.m);
}
 
}

#endif
