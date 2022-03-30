// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl15impl4(int a, int b) {
    return a + b;
}

int Lib4Core1Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl15Impl" << std::endl;
        Lib4Core1Impl15Core1 lib4core1impl15core1;
        lib4core1impl15core1.doSomething();
        Lib4Core1Impl15Core2 lib4core1impl15core2;
        lib4core1impl15core2.doSomething();
        Lib4Core1Impl16Api1 lib4core1impl16api1;
        lib4core1impl16api1.doSomething();
        Lib4Core1Impl16Api2 lib4core1impl16api2;
        lib4core1impl16api2.doSomething();
        Lib4Core1Impl16Api3 lib4core1impl16api3;
        lib4core1impl16api3.doSomething();
        visited = 1;
    }
}

