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
int lib14api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl34api4(int a, int b) {
    return a + b;
}

int Lib14Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl34Api" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl34Core lib14api3impl34core;
        lib14api3impl34core.doSomething();
        visited = 1;
    }
}
