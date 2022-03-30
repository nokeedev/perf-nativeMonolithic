// GENERATED SOURCE FILE

#include "lib14api3_private.h"
#include "lib14api3_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api3impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl33api24(int a, int b) {
    return a + b;
}

int Lib14Api3Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl33Api2" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl33Impl lib14api3impl33impl;
        lib14api3impl33impl.doSomething();
        Lib14Api3Impl34Api lib14api3impl34api;
        lib14api3impl34api.doSomething();
        visited = 1;
    }
}

