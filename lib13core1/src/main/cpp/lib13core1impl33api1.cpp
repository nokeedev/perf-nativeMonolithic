// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl33api14(int a, int b) {
    return a + b;
}

int Lib13Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl33Api1" << std::endl;
        Lib13Core1Impl34Api lib13core1impl34api;
        lib13core1impl34api.doSomething();
        Lib13Core1Impl33Impl lib13core1impl33impl;
        lib13core1impl33impl.doSomething();
        visited = 1;
    }
}

