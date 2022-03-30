// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl33api14(int a, int b) {
    return a + b;
}

int Lib2Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl33Api1" << std::endl;
        Lib2Core1Impl34Api lib2core1impl34api;
        lib2core1impl34api.doSomething();
        Lib2Core1Impl33Impl lib2core1impl33impl;
        lib2core1impl33impl.doSomething();
        visited = 1;
    }
}

