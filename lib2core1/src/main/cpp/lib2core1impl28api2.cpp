// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl28api24(int a, int b) {
    return a + b;
}

int Lib2Core1Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl28Api2" << std::endl;
        Lib2Core1Impl28Impl lib2core1impl28impl;
        lib2core1impl28impl.doSomething();
        Lib2Core1Impl29Api1 lib2core1impl29api1;
        lib2core1impl29api1.doSomething();
        Lib2Core1Impl29Api2 lib2core1impl29api2;
        lib2core1impl29api2.doSomething();
        Lib2Core1Impl29Api3 lib2core1impl29api3;
        lib2core1impl29api3.doSomething();
        visited = 1;
    }
}

