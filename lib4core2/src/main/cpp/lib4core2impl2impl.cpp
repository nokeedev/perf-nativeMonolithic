// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl2impl4(int a, int b) {
    return a + b;
}

int Lib4Core2Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl2Impl" << std::endl;
        Lib4Core2Impl2Core1 lib4core2impl2core1;
        lib4core2impl2core1.doSomething();
        Lib4Core2Impl2Core2 lib4core2impl2core2;
        lib4core2impl2core2.doSomething();
        Lib4Core2Impl3Api1 lib4core2impl3api1;
        lib4core2impl3api1.doSomething();
        Lib4Core2Impl3Api2 lib4core2impl3api2;
        lib4core2impl3api2.doSomething();
        Lib4Core2Impl3Api3 lib4core2impl3api3;
        lib4core2impl3api3.doSomething();
        visited = 1;
    }
}

