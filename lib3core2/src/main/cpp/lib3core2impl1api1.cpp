// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl1api14(int a, int b) {
    return a + b;
}

int Lib3Core2Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl1Api1" << std::endl;
        Lib3Core2Impl2Api1 lib3core2impl2api1;
        lib3core2impl2api1.doSomething();
        Lib3Core2Impl1Impl lib3core2impl1impl;
        lib3core2impl1impl.doSomething();
        Lib3Core2Impl2Api2 lib3core2impl2api2;
        lib3core2impl2api2.doSomething();
        Lib3Core2Impl2Api3 lib3core2impl2api3;
        lib3core2impl2api3.doSomething();
        visited = 1;
    }
}

