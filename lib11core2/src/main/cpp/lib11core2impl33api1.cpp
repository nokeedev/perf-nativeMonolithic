// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl33api14(int a, int b) {
    return a + b;
}

int Lib11Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl33Api1" << std::endl;
        Lib11Core2Impl34Api lib11core2impl34api;
        lib11core2impl34api.doSomething();
        Lib11Core2Impl33Impl lib11core2impl33impl;
        lib11core2impl33impl.doSomething();
        visited = 1;
    }
}

