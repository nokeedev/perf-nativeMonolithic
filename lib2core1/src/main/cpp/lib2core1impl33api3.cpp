// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl33api34(int a, int b) {
    return a + b;
}

int Lib2Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl33Api3" << std::endl;
        Lib2Core1Impl33Impl lib2core1impl33impl;
        lib2core1impl33impl.doSomething();
        Lib2Core1Impl34Api lib2core1impl34api;
        lib2core1impl34api.doSomething();
        visited = 1;
    }
}

