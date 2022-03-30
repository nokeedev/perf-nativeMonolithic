// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl17api24(int a, int b) {
    return a + b;
}

int Lib2Core1Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl17Api2" << std::endl;
        Lib2Core1Impl17Impl lib2core1impl17impl;
        lib2core1impl17impl.doSomething();
        Lib2Core1Impl18Api1 lib2core1impl18api1;
        lib2core1impl18api1.doSomething();
        Lib2Core1Impl18Api2 lib2core1impl18api2;
        lib2core1impl18api2.doSomething();
        Lib2Core1Impl18Api3 lib2core1impl18api3;
        lib2core1impl18api3.doSomething();
        visited = 1;
    }
}

