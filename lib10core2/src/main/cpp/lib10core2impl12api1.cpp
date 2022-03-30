// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl12api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl12Api1" << std::endl;
        Lib10Core2Impl13Api1 lib10core2impl13api1;
        lib10core2impl13api1.doSomething();
        Lib10Core2Impl12Impl lib10core2impl12impl;
        lib10core2impl12impl.doSomething();
        Lib10Core2Impl13Api2 lib10core2impl13api2;
        lib10core2impl13api2.doSomething();
        Lib10Core2Impl13Api3 lib10core2impl13api3;
        lib10core2impl13api3.doSomething();
        visited = 1;
    }
}

