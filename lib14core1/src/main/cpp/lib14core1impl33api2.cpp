// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl33api24(int a, int b) {
    return a + b;
}

int Lib14Core1Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl33Api2" << std::endl;
        Lib14Core1Impl33Impl lib14core1impl33impl;
        lib14core1impl33impl.doSomething();
        Lib14Core1Impl34Api lib14core1impl34api;
        lib14core1impl34api.doSomething();
        visited = 1;
    }
}

