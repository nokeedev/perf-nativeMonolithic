// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl7impl4(int a, int b) {
    return a + b;
}

int Lib8Core1Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl7Impl" << std::endl;
        Lib8Core1Impl7Core1 lib8core1impl7core1;
        lib8core1impl7core1.doSomething();
        Lib8Core1Impl7Core2 lib8core1impl7core2;
        lib8core1impl7core2.doSomething();
        Lib8Core1Impl8Api1 lib8core1impl8api1;
        lib8core1impl8api1.doSomething();
        Lib8Core1Impl8Api2 lib8core1impl8api2;
        lib8core1impl8api2.doSomething();
        Lib8Core1Impl8Api3 lib8core1impl8api3;
        lib8core1impl8api3.doSomething();
        visited = 1;
    }
}

