// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl31api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl31Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl31Impl lib17api1impl31impl;
        lib17api1impl31impl.doSomething();
        Lib17Api1Impl32Api1 lib17api1impl32api1;
        lib17api1impl32api1.doSomething();
        Lib17Api1Impl32Api2 lib17api1impl32api2;
        lib17api1impl32api2.doSomething();
        Lib17Api1Impl32Api3 lib17api1impl32api3;
        lib17api1impl32api3.doSomething();
        visited = 1;
    }
}

