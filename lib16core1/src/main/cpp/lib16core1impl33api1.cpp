// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl33api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl33Api1" << std::endl;
        Lib16Core1Impl34Api lib16core1impl34api;
        lib16core1impl34api.doSomething();
        Lib16Core1Impl33Impl lib16core1impl33impl;
        lib16core1impl33impl.doSomething();
        visited = 1;
    }
}

