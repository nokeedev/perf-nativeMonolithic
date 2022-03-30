// GENERATED SOURCE FILE

#include "lib7api1_impl.h"
#include "lib7api1_private.h"
#include "lib8api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api14(int a, int b) {
    return a + b;
}

int Lib7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Api1Impl1Api1 lib7api1impl1api1;
        lib7api1impl1api1.doSomething();
        Lib7Api1Impl1Api2 lib7api1impl1api2;
        lib7api1impl1api2.doSomething();
        Lib7Api1Impl1Api3 lib7api1impl1api3;
        lib7api1impl1api3.doSomething();
        visited = 1;
    }
}

