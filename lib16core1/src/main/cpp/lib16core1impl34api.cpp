// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl34api4(int a, int b) {
    return a + b;
}

int Lib16Core1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl34Api" << std::endl;
        Lib16Core1Impl34Core lib16core1impl34core;
        lib16core1impl34core.doSomething();
        visited = 1;
    }
}

