// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl25api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl25Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl25Impl lib17api1impl25impl;
        lib17api1impl25impl.doSomething();
        Lib17Api1Impl26Api1 lib17api1impl26api1;
        lib17api1impl26api1.doSomething();
        Lib17Api1Impl26Api2 lib17api1impl26api2;
        lib17api1impl26api2.doSomething();
        Lib17Api1Impl26Api3 lib17api1impl26api3;
        lib17api1impl26api3.doSomething();
        visited = 1;
    }
}

