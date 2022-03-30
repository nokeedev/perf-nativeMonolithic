// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl33api34(int a, int b) {
    return a + b;
}

int Lib3Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl33Api3" << std::endl;
        Lib3Core1Impl33Impl lib3core1impl33impl;
        lib3core1impl33impl.doSomething();
        Lib3Core1Impl34Api lib3core1impl34api;
        lib3core1impl34api.doSomething();
        visited = 1;
    }
}

