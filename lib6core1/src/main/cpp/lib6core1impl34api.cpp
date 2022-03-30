// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl34api4(int a, int b) {
    return a + b;
}

int Lib6Core1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl34Api" << std::endl;
        Lib6Core1Impl34Core lib6core1impl34core;
        lib6core1impl34core.doSomething();
        visited = 1;
    }
}

