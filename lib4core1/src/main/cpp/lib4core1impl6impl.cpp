// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl6impl4(int a, int b) {
    return a + b;
}

int Lib4Core1Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl6Impl" << std::endl;
        Lib4Core1Impl6Core1 lib4core1impl6core1;
        lib4core1impl6core1.doSomething();
        Lib4Core1Impl6Core2 lib4core1impl6core2;
        lib4core1impl6core2.doSomething();
        Lib4Core1Impl7Api1 lib4core1impl7api1;
        lib4core1impl7api1.doSomething();
        Lib4Core1Impl7Api2 lib4core1impl7api2;
        lib4core1impl7api2.doSomething();
        Lib4Core1Impl7Api3 lib4core1impl7api3;
        lib4core1impl7api3.doSomething();
        visited = 1;
    }
}

