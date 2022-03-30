// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl33api14(int a, int b) {
    return a + b;
}

int Lib4Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl33Api1" << std::endl;
        Lib4Core1Impl34Api lib4core1impl34api;
        lib4core1impl34api.doSomething();
        Lib4Core1Impl33Impl lib4core1impl33impl;
        lib4core1impl33impl.doSomething();
        visited = 1;
    }
}

