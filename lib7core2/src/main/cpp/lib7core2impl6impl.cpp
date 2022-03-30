// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl6impl4(int a, int b) {
    return a + b;
}

int Lib7Core2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl6Impl" << std::endl;
        Lib7Core2Impl6Core1 lib7core2impl6core1;
        lib7core2impl6core1.doSomething();
        Lib7Core2Impl6Core2 lib7core2impl6core2;
        lib7core2impl6core2.doSomething();
        Lib7Core2Impl7Api1 lib7core2impl7api1;
        lib7core2impl7api1.doSomething();
        Lib7Core2Impl7Api2 lib7core2impl7api2;
        lib7core2impl7api2.doSomething();
        Lib7Core2Impl7Api3 lib7core2impl7api3;
        lib7core2impl7api3.doSomething();
        visited = 1;
    }
}

