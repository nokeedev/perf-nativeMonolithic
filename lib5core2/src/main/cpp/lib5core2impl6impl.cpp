// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl6impl4(int a, int b) {
    return a + b;
}

int Lib5Core2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl6Impl" << std::endl;
        Lib5Core2Impl6Core1 lib5core2impl6core1;
        lib5core2impl6core1.doSomething();
        Lib5Core2Impl6Core2 lib5core2impl6core2;
        lib5core2impl6core2.doSomething();
        Lib5Core2Impl7Api1 lib5core2impl7api1;
        lib5core2impl7api1.doSomething();
        Lib5Core2Impl7Api2 lib5core2impl7api2;
        lib5core2impl7api2.doSomething();
        Lib5Core2Impl7Api3 lib5core2impl7api3;
        lib5core2impl7api3.doSomething();
        visited = 1;
    }
}

