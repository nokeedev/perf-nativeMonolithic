// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl17api24(int a, int b) {
    return a + b;
}

int Lib17Api1Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl17Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl17Impl lib17api1impl17impl;
        lib17api1impl17impl.doSomething();
        Lib17Api1Impl18Api1 lib17api1impl18api1;
        lib17api1impl18api1.doSomething();
        Lib17Api1Impl18Api2 lib17api1impl18api2;
        lib17api1impl18api2.doSomething();
        Lib17Api1Impl18Api3 lib17api1impl18api3;
        lib17api1impl18api3.doSomething();
        visited = 1;
    }
}

