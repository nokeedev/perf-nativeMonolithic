// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl33api24(int a, int b) {
    return a + b;
}

int Lib6Core1Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl33Api2" << std::endl;
        Lib6Core1Impl33Impl lib6core1impl33impl;
        lib6core1impl33impl.doSomething();
        Lib6Core1Impl34Api lib6core1impl34api;
        lib6core1impl34api.doSomething();
        visited = 1;
    }
}

