// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl6impl4(int a, int b) {
    return a + b;
}

int Lib15Core2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl6Impl" << std::endl;
        Lib15Core2Impl6Core1 lib15core2impl6core1;
        lib15core2impl6core1.doSomething();
        Lib15Core2Impl6Core2 lib15core2impl6core2;
        lib15core2impl6core2.doSomething();
        Lib15Core2Impl7Api1 lib15core2impl7api1;
        lib15core2impl7api1.doSomething();
        Lib15Core2Impl7Api2 lib15core2impl7api2;
        lib15core2impl7api2.doSomething();
        Lib15Core2Impl7Api3 lib15core2impl7api3;
        lib15core2impl7api3.doSomething();
        visited = 1;
    }
}

