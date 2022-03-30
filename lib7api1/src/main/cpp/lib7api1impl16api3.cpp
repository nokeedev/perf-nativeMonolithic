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
int lib7api1impl16api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl16api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl16api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl16api34(int a, int b) {
    return a + b;
}

int Lib7Api1Impl16Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl16Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl16Api3" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl16Impl lib7api1impl16impl;
        lib7api1impl16impl.doSomething();
        Lib7Api1Impl17Api1 lib7api1impl17api1;
        lib7api1impl17api1.doSomething();
        Lib7Api1Impl17Api2 lib7api1impl17api2;
        lib7api1impl17api2.doSomething();
        Lib7Api1Impl17Api3 lib7api1impl17api3;
        lib7api1impl17api3.doSomething();
        visited = 1;
    }
}

