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
int lib14api3impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl12api24(int a, int b) {
    return a + b;
}

int Lib14Api3Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl12Api2" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl12Impl lib14api3impl12impl;
        lib14api3impl12impl.doSomething();
        Lib14Api3Impl13Api1 lib14api3impl13api1;
        lib14api3impl13api1.doSomething();
        Lib14Api3Impl13Api2 lib14api3impl13api2;
        lib14api3impl13api2.doSomething();
        Lib14Api3Impl13Api3 lib14api3impl13api3;
        lib14api3impl13api3.doSomething();
        visited = 1;
    }
}

