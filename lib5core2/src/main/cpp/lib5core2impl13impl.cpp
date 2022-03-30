// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl13impl4(int a, int b) {
    return a + b;
}

int Lib5Core2Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl13Impl" << std::endl;
        Lib5Core2Impl13Core1 lib5core2impl13core1;
        lib5core2impl13core1.doSomething();
        Lib5Core2Impl13Core2 lib5core2impl13core2;
        lib5core2impl13core2.doSomething();
        Lib5Core2Impl14Api1 lib5core2impl14api1;
        lib5core2impl14api1.doSomething();
        Lib5Core2Impl14Api2 lib5core2impl14api2;
        lib5core2impl14api2.doSomething();
        Lib5Core2Impl14Api3 lib5core2impl14api3;
        lib5core2impl14api3.doSomething();
        visited = 1;
    }
}

