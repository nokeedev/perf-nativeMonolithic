// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl33api34(int a, int b) {
    return a + b;
}

int Lib4Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl33Api3" << std::endl;
        Lib4Core1Impl33Impl lib4core1impl33impl;
        lib4core1impl33impl.doSomething();
        Lib4Core1Impl34Api lib4core1impl34api;
        lib4core1impl34api.doSomething();
        visited = 1;
    }
}

