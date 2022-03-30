// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl30api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl30Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl30Impl lib17api1impl30impl;
        lib17api1impl30impl.doSomething();
        Lib17Api1Impl31Api1 lib17api1impl31api1;
        lib17api1impl31api1.doSomething();
        Lib17Api1Impl31Api2 lib17api1impl31api2;
        lib17api1impl31api2.doSomething();
        Lib17Api1Impl31Api3 lib17api1impl31api3;
        lib17api1impl31api3.doSomething();
        visited = 1;
    }
}

