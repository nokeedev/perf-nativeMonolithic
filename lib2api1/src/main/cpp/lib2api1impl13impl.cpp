// GENERATED SOURCE FILE

#include "lib2api1_private.h"
#include "lib2api1_impl.h"
#include "lib3api1.h"
#include "lib2impl.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api1impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl13impl4(int a, int b) {
    return a + b;
}

int Lib2Api1Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl13Impl" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl13Core1 lib2api1impl13core1;
        lib2api1impl13core1.doSomething();
        Lib2Api1Impl13Core2 lib2api1impl13core2;
        lib2api1impl13core2.doSomething();
        Lib2Api1Impl14Api1 lib2api1impl14api1;
        lib2api1impl14api1.doSomething();
        Lib2Api1Impl14Api2 lib2api1impl14api2;
        lib2api1impl14api2.doSomething();
        Lib2Api1Impl14Api3 lib2api1impl14api3;
        lib2api1impl14api3.doSomething();
        visited = 1;
    }
}

