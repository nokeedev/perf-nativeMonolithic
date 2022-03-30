// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl33api34(int a, int b) {
    return a + b;
}

int Lib7Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl33Api3" << std::endl;
        Lib7Core1Impl33Impl lib7core1impl33impl;
        lib7core1impl33impl.doSomething();
        Lib7Core1Impl34Api lib7core1impl34api;
        lib7core1impl34api.doSomething();
        visited = 1;
    }
}

