// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl11api14(int a, int b) {
    return a + b;
}

int Lib2Core1Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl11Api1" << std::endl;
        Lib2Core1Impl12Api1 lib2core1impl12api1;
        lib2core1impl12api1.doSomething();
        Lib2Core1Impl11Impl lib2core1impl11impl;
        lib2core1impl11impl.doSomething();
        Lib2Core1Impl12Api2 lib2core1impl12api2;
        lib2core1impl12api2.doSomething();
        Lib2Core1Impl12Api3 lib2core1impl12api3;
        lib2core1impl12api3.doSomething();
        visited = 1;
    }
}

