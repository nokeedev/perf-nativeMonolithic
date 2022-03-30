// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl32api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl32Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl32Impl lib17api1impl32impl;
        lib17api1impl32impl.doSomething();
        Lib17Api1Impl33Api1 lib17api1impl33api1;
        lib17api1impl33api1.doSomething();
        Lib17Api1Impl33Api2 lib17api1impl33api2;
        lib17api1impl33api2.doSomething();
        Lib17Api1Impl33Api3 lib17api1impl33api3;
        lib17api1impl33api3.doSomething();
        visited = 1;
    }
}

