// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl11api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl11api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl11api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl11api24(int a, int b) {
    return a + b;
}

int Lib17Api1Impl11Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl11Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl11Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl11Impl lib17api1impl11impl;
        lib17api1impl11impl.doSomething();
        Lib17Api1Impl12Api1 lib17api1impl12api1;
        lib17api1impl12api1.doSomething();
        Lib17Api1Impl12Api2 lib17api1impl12api2;
        lib17api1impl12api2.doSomething();
        Lib17Api1Impl12Api3 lib17api1impl12api3;
        lib17api1impl12api3.doSomething();
        visited = 1;
    }
}

