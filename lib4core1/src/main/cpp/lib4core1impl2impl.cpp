// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl2impl4(int a, int b) {
    return a + b;
}

int Lib4Core1Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl2Impl" << std::endl;
        Lib4Core1Impl2Core1 lib4core1impl2core1;
        lib4core1impl2core1.doSomething();
        Lib4Core1Impl2Core2 lib4core1impl2core2;
        lib4core1impl2core2.doSomething();
        Lib4Core1Impl3Api1 lib4core1impl3api1;
        lib4core1impl3api1.doSomething();
        Lib4Core1Impl3Api2 lib4core1impl3api2;
        lib4core1impl3api2.doSomething();
        Lib4Core1Impl3Api3 lib4core1impl3api3;
        lib4core1impl3api3.doSomething();
        visited = 1;
    }
}

