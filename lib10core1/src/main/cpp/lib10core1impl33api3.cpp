// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl33api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl33Api3" << std::endl;
        Lib10Core1Impl33Impl lib10core1impl33impl;
        lib10core1impl33impl.doSomething();
        Lib10Core1Impl34Api lib10core1impl34api;
        lib10core1impl34api.doSomething();
        visited = 1;
    }
}

