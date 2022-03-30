// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl33api34(int a, int b) {
    return a + b;
}

int Lib13Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl33Api3" << std::endl;
        Lib13Core1Impl33Impl lib13core1impl33impl;
        lib13core1impl33impl.doSomething();
        Lib13Core1Impl34Api lib13core1impl34api;
        lib13core1impl34api.doSomething();
        visited = 1;
    }
}

