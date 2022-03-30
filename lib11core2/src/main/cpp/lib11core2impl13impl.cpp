// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl13impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl13Impl" << std::endl;
        Lib11Core2Impl13Core1 lib11core2impl13core1;
        lib11core2impl13core1.doSomething();
        Lib11Core2Impl13Core2 lib11core2impl13core2;
        lib11core2impl13core2.doSomething();
        Lib11Core2Impl14Api1 lib11core2impl14api1;
        lib11core2impl14api1.doSomething();
        Lib11Core2Impl14Api2 lib11core2impl14api2;
        lib11core2impl14api2.doSomething();
        Lib11Core2Impl14Api3 lib11core2impl14api3;
        lib11core2impl14api3.doSomething();
        visited = 1;
    }
}

