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
int lib7api1impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl24impl4(int a, int b) {
    return a + b;
}

int Lib7Api1Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl24Impl" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl24Core1 lib7api1impl24core1;
        lib7api1impl24core1.doSomething();
        Lib7Api1Impl24Core2 lib7api1impl24core2;
        lib7api1impl24core2.doSomething();
        Lib7Api1Impl25Api1 lib7api1impl25api1;
        lib7api1impl25api1.doSomething();
        Lib7Api1Impl25Api2 lib7api1impl25api2;
        lib7api1impl25api2.doSomething();
        Lib7Api1Impl25Api3 lib7api1impl25api3;
        lib7api1impl25api3.doSomething();
        visited = 1;
    }
}

