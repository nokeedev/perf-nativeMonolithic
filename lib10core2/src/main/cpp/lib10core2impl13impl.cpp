// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl13Impl" << std::endl;
        Lib10Core2Impl13Core1 lib10core2impl13core1;
        lib10core2impl13core1.doSomething();
        Lib10Core2Impl13Core2 lib10core2impl13core2;
        lib10core2impl13core2.doSomething();
        Lib10Core2Impl14Api1 lib10core2impl14api1;
        lib10core2impl14api1.doSomething();
        Lib10Core2Impl14Api2 lib10core2impl14api2;
        lib10core2impl14api2.doSomething();
        Lib10Core2Impl14Api3 lib10core2impl14api3;
        lib10core2impl14api3.doSomething();
        visited = 1;
    }
}

