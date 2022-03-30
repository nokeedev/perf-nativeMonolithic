// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl28api24(int a, int b) {
    return a + b;
}

int Lib17Api1Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl28Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl28Impl lib17api1impl28impl;
        lib17api1impl28impl.doSomething();
        Lib17Api1Impl29Api1 lib17api1impl29api1;
        lib17api1impl29api1.doSomething();
        Lib17Api1Impl29Api2 lib17api1impl29api2;
        lib17api1impl29api2.doSomething();
        Lib17Api1Impl29Api3 lib17api1impl29api3;
        lib17api1impl29api3.doSomething();
        visited = 1;
    }
}

