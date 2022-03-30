// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl33api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl33Api1" << std::endl;
        Lib14Core1Impl34Api lib14core1impl34api;
        lib14core1impl34api.doSomething();
        Lib14Core1Impl33Impl lib14core1impl33impl;
        lib14core1impl33impl.doSomething();
        visited = 1;
    }
}

