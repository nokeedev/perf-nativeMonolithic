// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl33api24(int a, int b) {
    return a + b;
}

int Lib8Core1Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl33Api2" << std::endl;
        Lib8Core1Impl33Impl lib8core1impl33impl;
        lib8core1impl33impl.doSomething();
        Lib8Core1Impl34Api lib8core1impl34api;
        lib8core1impl34api.doSomething();
        visited = 1;
    }
}

