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
int lib14api1impl11api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl11api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl11api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl11api24(int a, int b) {
    return a + b;
}

int Lib14Api1Impl11Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl11Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl11Api2" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl11Impl lib14api1impl11impl;
        lib14api1impl11impl.doSomething();
        Lib14Api1Impl12Api1 lib14api1impl12api1;
        lib14api1impl12api1.doSomething();
        Lib14Api1Impl12Api2 lib14api1impl12api2;
        lib14api1impl12api2.doSomething();
        Lib14Api1Impl12Api3 lib14api1impl12api3;
        lib14api1impl12api3.doSomething();
        visited = 1;
    }
}

