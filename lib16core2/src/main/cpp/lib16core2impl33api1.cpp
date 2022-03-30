// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl33api14(int a, int b) {
    return a + b;
}

int Lib16Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl33Api1" << std::endl;
        Lib16Core2Impl34Api lib16core2impl34api;
        lib16core2impl34api.doSomething();
        Lib16Core2Impl33Impl lib16core2impl33impl;
        lib16core2impl33impl.doSomething();
        visited = 1;
    }
}

