// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl33api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl33Api1" << std::endl;
        Lib7Core1Impl34Api lib7core1impl34api;
        lib7core1impl34api.doSomething();
        Lib7Core1Impl33Impl lib7core1impl33impl;
        lib7core1impl33impl.doSomething();
        visited = 1;
    }
}

