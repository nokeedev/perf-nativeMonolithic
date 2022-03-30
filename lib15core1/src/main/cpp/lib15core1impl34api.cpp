// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl34api4(int a, int b) {
    return a + b;
}

int Lib15Core1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl34Api" << std::endl;
        Lib15Core1Impl34Core lib15core1impl34core;
        lib15core1impl34core.doSomething();
        visited = 1;
    }
}

