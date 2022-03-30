// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl34api4(int a, int b) {
    return a + b;
}

int Lib4Core1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl34Api" << std::endl;
        Lib4Core1Impl34Core lib4core1impl34core;
        lib4core1impl34core.doSomething();
        visited = 1;
    }
}

