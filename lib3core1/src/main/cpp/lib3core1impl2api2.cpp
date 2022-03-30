// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl2api24(int a, int b) {
    return a + b;
}

int Lib3Core1Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl2Api2" << std::endl;
        Lib3Core1Impl2Impl lib3core1impl2impl;
        lib3core1impl2impl.doSomething();
        Lib3Core1Impl3Api1 lib3core1impl3api1;
        lib3core1impl3api1.doSomething();
        Lib3Core1Impl3Api2 lib3core1impl3api2;
        lib3core1impl3api2.doSomething();
        Lib3Core1Impl3Api3 lib3core1impl3api3;
        lib3core1impl3api3.doSomething();
        visited = 1;
    }
}

