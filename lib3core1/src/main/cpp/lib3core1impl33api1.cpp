// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl33api14(int a, int b) {
    return a + b;
}

int Lib3Core1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl33Api1" << std::endl;
        Lib3Core1Impl34Api lib3core1impl34api;
        lib3core1impl34api.doSomething();
        Lib3Core1Impl33Impl lib3core1impl33impl;
        lib3core1impl33impl.doSomething();
        visited = 1;
    }
}

