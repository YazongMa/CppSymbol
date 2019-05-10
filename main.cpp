#include <dlfcn.h>
#include <errno.h>
 
#include <cstdio>
#include <cstdlib>
 
#include "a.h"
 
 
int main() {
    void (*dll_func)() = NULL;
    char* error = NULL;
 
    foo_class::_.m += 1000;
    printf("&foo_class::_ = 0x%llx, foo_class::_.m = %d\n", &foo_class::_, foo_class::_.m);
 
 
    void* handle = dlopen("libtest_c.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        return -1;
    }
 
    dlerror();
 
    *(void **) (&dll_func) = dlsym(handle, "dll_func");
 
    if ((error = dlerror()) != NULL)  {
        fprintf(stderr, "%s\n", error);
        return -2;
    }
 
    (*dll_func)();
 
    dlclose(handle);
 
    return 0;
}
