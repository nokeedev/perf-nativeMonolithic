// GENERATED SOURCE FILE

#include "lib14api1_private.h"
#include "lib14api1_impl.h"
#include "lib15api1.h"
#include "lib14impl.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api1impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl9impl4(int a, int b) {
    return a + b;
}

int Lib14Api1Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl9Impl" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl9Core1 lib14api1impl9core1;
        lib14api1impl9core1.doSomething();
        Lib14Api1Impl9Core2 lib14api1impl9core2;
        lib14api1impl9core2.doSomething();
        Lib14Api1Impl10Api1 lib14api1impl10api1;
        lib14api1impl10api1.doSomething();
        Lib14Api1Impl10Api2 lib14api1impl10api2;
        lib14api1impl10api2.doSomething();
        Lib14Api1Impl10Api3 lib14api1impl10api3;
        lib14api1impl10api3.doSomething();
        visited = 1;
    }
}

