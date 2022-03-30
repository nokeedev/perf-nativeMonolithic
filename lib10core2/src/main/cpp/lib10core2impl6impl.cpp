// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl6impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl6Impl" << std::endl;
        Lib10Core2Impl6Core1 lib10core2impl6core1;
        lib10core2impl6core1.doSomething();
        Lib10Core2Impl6Core2 lib10core2impl6core2;
        lib10core2impl6core2.doSomething();
        Lib10Core2Impl7Api1 lib10core2impl7api1;
        lib10core2impl7api1.doSomething();
        Lib10Core2Impl7Api2 lib10core2impl7api2;
        lib10core2impl7api2.doSomething();
        Lib10Core2Impl7Api3 lib10core2impl7api3;
        lib10core2impl7api3.doSomething();
        visited = 1;
    }
}

