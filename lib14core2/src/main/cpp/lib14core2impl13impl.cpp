// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl13impl4(int a, int b) {
    return a + b;
}

int Lib14Core2Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl13Impl" << std::endl;
        Lib14Core2Impl13Core1 lib14core2impl13core1;
        lib14core2impl13core1.doSomething();
        Lib14Core2Impl13Core2 lib14core2impl13core2;
        lib14core2impl13core2.doSomething();
        Lib14Core2Impl14Api1 lib14core2impl14api1;
        lib14core2impl14api1.doSomething();
        Lib14Core2Impl14Api2 lib14core2impl14api2;
        lib14core2impl14api2.doSomething();
        Lib14Core2Impl14Api3 lib14core2impl14api3;
        lib14core2impl14api3.doSomething();
        visited = 1;
    }
}

