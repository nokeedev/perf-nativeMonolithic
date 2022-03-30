// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl33api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl33Api2" << std::endl;
        Lib12Core1Impl33Impl lib12core1impl33impl;
        lib12core1impl33impl.doSomething();
        Lib12Core1Impl34Api lib12core1impl34api;
        lib12core1impl34api.doSomething();
        visited = 1;
    }
}

