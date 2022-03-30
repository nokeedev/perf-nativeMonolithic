// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl33api34(int a, int b) {
    return a + b;
}

int Lib9Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl33Api3" << std::endl;
        Lib9Core1Impl33Impl lib9core1impl33impl;
        lib9core1impl33impl.doSomething();
        Lib9Core1Impl34Api lib9core1impl34api;
        lib9core1impl34api.doSomething();
        visited = 1;
    }
}

