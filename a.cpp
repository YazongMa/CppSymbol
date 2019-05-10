#include <cstdio>
#include "a.h"
 
foo_class foo_class::_;
 
 
foo_class::foo_class() {
    m = 10;
    printf("foo_class::foo_class(), this-> 0x%llx\n", this);
}
 
foo_class::~foo_class() {
    printf("foo_class::~foo_class(), this-> 0x%llx\n", this);
}
