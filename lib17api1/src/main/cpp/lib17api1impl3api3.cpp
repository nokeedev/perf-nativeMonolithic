// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl3api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl3Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl3Impl lib17api1impl3impl;
        lib17api1impl3impl.doSomething();
        Lib17Api1Impl4Api1 lib17api1impl4api1;
        lib17api1impl4api1.doSomething();
        Lib17Api1Impl4Api2 lib17api1impl4api2;
        lib17api1impl4api2.doSomething();
        Lib17Api1Impl4Api3 lib17api1impl4api3;
        lib17api1impl4api3.doSomething();
        visited = 1;
    }
}

