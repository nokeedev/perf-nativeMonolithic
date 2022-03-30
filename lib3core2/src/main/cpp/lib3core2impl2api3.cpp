// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl2api34(int a, int b) {
    return a + b;
}

int Lib3Core2Impl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl2Api3" << std::endl;
        Lib3Core2Impl2Impl lib3core2impl2impl;
        lib3core2impl2impl.doSomething();
        Lib3Core2Impl3Api1 lib3core2impl3api1;
        lib3core2impl3api1.doSomething();
        Lib3Core2Impl3Api2 lib3core2impl3api2;
        lib3core2impl3api2.doSomething();
        Lib3Core2Impl3Api3 lib3core2impl3api3;
        lib3core2impl3api3.doSomething();
        visited = 1;
    }
}

