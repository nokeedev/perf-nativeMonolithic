// GENERATED SOURCE FILE

#include "lib5api1_private.h"
#include "lib5api1_impl.h"
#include "lib6api1.h"
#include "lib5impl.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api1impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api1impl6impl4(int a, int b) {
    return a + b;
}

int Lib5Api1Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api1Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api1Impl6Impl" << std::endl;
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api1Impl6Core1 lib5api1impl6core1;
        lib5api1impl6core1.doSomething();
        Lib5Api1Impl6Core2 lib5api1impl6core2;
        lib5api1impl6core2.doSomething();
        Lib5Api1Impl7Api1 lib5api1impl7api1;
        lib5api1impl7api1.doSomething();
        Lib5Api1Impl7Api2 lib5api1impl7api2;
        lib5api1impl7api2.doSomething();
        Lib5Api1Impl7Api3 lib5api1impl7api3;
        lib5api1impl7api3.doSomething();
        visited = 1;
    }
}

