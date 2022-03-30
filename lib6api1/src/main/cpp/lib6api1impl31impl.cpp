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
int lib6api1impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl31impl4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl31Impl" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl31Core1 lib6api1impl31core1;
        lib6api1impl31core1.doSomething();
        Lib6Api1Impl31Core2 lib6api1impl31core2;
        lib6api1impl31core2.doSomething();
        Lib6Api1Impl32Api1 lib6api1impl32api1;
        lib6api1impl32api1.doSomething();
        Lib6Api1Impl32Api2 lib6api1impl32api2;
        lib6api1impl32api2.doSomething();
        Lib6Api1Impl32Api3 lib6api1impl32api3;
        lib6api1impl32api3.doSomething();
        visited = 1;
    }
}

