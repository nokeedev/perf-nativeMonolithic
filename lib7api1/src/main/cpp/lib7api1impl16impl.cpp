// GENERATED SOURCE FILE

#include "lib7api1_private.h"
#include "lib7api1_impl.h"
#include "lib8api1.h"
#include "lib7impl.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api1impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl16impl4(int a, int b) {
    return a + b;
}

int Lib7Api1Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl16Impl" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl16Core1 lib7api1impl16core1;
        lib7api1impl16core1.doSomething();
        Lib7Api1Impl16Core2 lib7api1impl16core2;
        lib7api1impl16core2.doSomething();
        Lib7Api1Impl17Api1 lib7api1impl17api1;
        lib7api1impl17api1.doSomething();
        Lib7Api1Impl17Api2 lib7api1impl17api2;
        lib7api1impl17api2.doSomething();
        Lib7Api1Impl17Api3 lib7api1impl17api3;
        lib7api1impl17api3.doSomething();
        visited = 1;
    }
}

