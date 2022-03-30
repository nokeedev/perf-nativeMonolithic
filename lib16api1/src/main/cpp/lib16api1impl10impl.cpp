// GENERATED SOURCE FILE

#include "lib16api1_private.h"
#include "lib16api1_impl.h"
#include "lib17api1.h"
#include "lib16impl.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api1impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl10impl4(int a, int b) {
    return a + b;
}

int Lib16Api1Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl10Impl" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl10Core1 lib16api1impl10core1;
        lib16api1impl10core1.doSomething();
        Lib16Api1Impl10Core2 lib16api1impl10core2;
        lib16api1impl10core2.doSomething();
        Lib16Api1Impl11Api1 lib16api1impl11api1;
        lib16api1impl11api1.doSomething();
        Lib16Api1Impl11Api2 lib16api1impl11api2;
        lib16api1impl11api2.doSomething();
        Lib16Api1Impl11Api3 lib16api1impl11api3;
        lib16api1impl11api3.doSomething();
        visited = 1;
    }
}

