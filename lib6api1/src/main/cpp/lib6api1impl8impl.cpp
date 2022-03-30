// GENERATED SOURCE FILE

#include "lib6api1_private.h"
#include "lib6api1_impl.h"
#include "lib7api1.h"
#include "lib6impl.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api1impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl8impl4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl8Impl" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl8Core1 lib6api1impl8core1;
        lib6api1impl8core1.doSomething();
        Lib6Api1Impl8Core2 lib6api1impl8core2;
        lib6api1impl8core2.doSomething();
        Lib6Api1Impl9Api1 lib6api1impl9api1;
        lib6api1impl9api1.doSomething();
        Lib6Api1Impl9Api2 lib6api1impl9api2;
        lib6api1impl9api2.doSomething();
        Lib6Api1Impl9Api3 lib6api1impl9api3;
        lib6api1impl9api3.doSomething();
        visited = 1;
    }
}

