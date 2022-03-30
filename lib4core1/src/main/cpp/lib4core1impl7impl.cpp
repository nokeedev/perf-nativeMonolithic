// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl7impl4(int a, int b) {
    return a + b;
}

int Lib4Core1Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl7Impl" << std::endl;
        Lib4Core1Impl7Core1 lib4core1impl7core1;
        lib4core1impl7core1.doSomething();
        Lib4Core1Impl7Core2 lib4core1impl7core2;
        lib4core1impl7core2.doSomething();
        Lib4Core1Impl8Api1 lib4core1impl8api1;
        lib4core1impl8api1.doSomething();
        Lib4Core1Impl8Api2 lib4core1impl8api2;
        lib4core1impl8api2.doSomething();
        Lib4Core1Impl8Api3 lib4core1impl8api3;
        lib4core1impl8api3.doSomething();
        visited = 1;
    }
}

