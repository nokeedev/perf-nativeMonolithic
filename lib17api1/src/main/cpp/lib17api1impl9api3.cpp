// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl9api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl9Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl9Impl lib17api1impl9impl;
        lib17api1impl9impl.doSomething();
        Lib17Api1Impl10Api1 lib17api1impl10api1;
        lib17api1impl10api1.doSomething();
        Lib17Api1Impl10Api2 lib17api1impl10api2;
        lib17api1impl10api2.doSomething();
        Lib17Api1Impl10Api3 lib17api1impl10api3;
        lib17api1impl10api3.doSomething();
        visited = 1;
    }
}

