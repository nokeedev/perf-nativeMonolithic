// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl33api34(int a, int b) {
    return a + b;
}

int Lib5Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl33Api3" << std::endl;
        Lib5Core1Impl33Impl lib5core1impl33impl;
        lib5core1impl33impl.doSomething();
        Lib5Core1Impl34Api lib5core1impl34api;
        lib5core1impl34api.doSomething();
        visited = 1;
    }
}

