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
int lib7api1impl18api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl18api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl18api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl18api14(int a, int b) {
    return a + b;
}

int Lib7Api1Impl18Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl18Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl18Api1" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl19Api1 lib7api1impl19api1;
        lib7api1impl19api1.doSomething();
        Lib7Api1Impl18Impl lib7api1impl18impl;
        lib7api1impl18impl.doSomething();
        Lib7Api1Impl19Api2 lib7api1impl19api2;
        lib7api1impl19api2.doSomething();
        Lib7Api1Impl19Api3 lib7api1impl19api3;
        lib7api1impl19api3.doSomething();
        visited = 1;
    }
}

