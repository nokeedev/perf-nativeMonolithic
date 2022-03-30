// GENERATED SOURCE FILE

#include "lib15api3_private.h"
#include "lib15api3_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api3impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl8api24(int a, int b) {
    return a + b;
}

int Lib15Api3Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl8Api2" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl8Impl lib15api3impl8impl;
        lib15api3impl8impl.doSomething();
        Lib15Api3Impl9Api1 lib15api3impl9api1;
        lib15api3impl9api1.doSomething();
        Lib15Api3Impl9Api2 lib15api3impl9api2;
        lib15api3impl9api2.doSomething();
        Lib15Api3Impl9Api3 lib15api3impl9api3;
        lib15api3impl9api3.doSomething();
        visited = 1;
    }
}

