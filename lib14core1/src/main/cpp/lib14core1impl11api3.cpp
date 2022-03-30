// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl11api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl11Api3" << std::endl;
        Lib14Core1Impl11Impl lib14core1impl11impl;
        lib14core1impl11impl.doSomething();
        Lib14Core1Impl12Api1 lib14core1impl12api1;
        lib14core1impl12api1.doSomething();
        Lib14Core1Impl12Api2 lib14core1impl12api2;
        lib14core1impl12api2.doSomething();
        Lib14Core1Impl12Api3 lib14core1impl12api3;
        lib14core1impl12api3.doSomething();
        visited = 1;
    }
}

