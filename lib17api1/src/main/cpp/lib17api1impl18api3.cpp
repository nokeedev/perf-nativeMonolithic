// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl18api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl18Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl18Impl lib17api1impl18impl;
        lib17api1impl18impl.doSomething();
        Lib17Api1Impl19Api1 lib17api1impl19api1;
        lib17api1impl19api1.doSomething();
        Lib17Api1Impl19Api2 lib17api1impl19api2;
        lib17api1impl19api2.doSomething();
        Lib17Api1Impl19Api3 lib17api1impl19api3;
        lib17api1impl19api3.doSomething();
        visited = 1;
    }
}

