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
int lib7api1impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl3api24(int a, int b) {
    return a + b;
}

int Lib7Api1Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl3Api2" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl3Impl lib7api1impl3impl;
        lib7api1impl3impl.doSomething();
        Lib7Api1Impl4Api1 lib7api1impl4api1;
        lib7api1impl4api1.doSomething();
        Lib7Api1Impl4Api2 lib7api1impl4api2;
        lib7api1impl4api2.doSomething();
        Lib7Api1Impl4Api3 lib7api1impl4api3;
        lib7api1impl4api3.doSomething();
        visited = 1;
    }
}

