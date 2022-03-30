// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl33api24(int a, int b) {
    return a + b;
}

int Lib15Core1Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl33Api2" << std::endl;
        Lib15Core1Impl33Impl lib15core1impl33impl;
        lib15core1impl33impl.doSomething();
        Lib15Core1Impl34Api lib15core1impl34api;
        lib15core1impl34api.doSomething();
        visited = 1;
    }
}

