// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl34api4(int a, int b) {
    return a + b;
}

int Lib2Core1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl34Api" << std::endl;
        Lib2Core1Impl34Core lib2core1impl34core;
        lib2core1impl34core.doSomething();
        visited = 1;
    }
}

