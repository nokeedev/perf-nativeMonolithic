// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl33api14(int a, int b) {
    return a + b;
}

int Lib11Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl33Api1" << std::endl;
        Lib11Core1Impl34Api lib11core1impl34api;
        lib11core1impl34api.doSomething();
        Lib11Core1Impl33Impl lib11core1impl33impl;
        lib11core1impl33impl.doSomething();
        visited = 1;
    }
}

