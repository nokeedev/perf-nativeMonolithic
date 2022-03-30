// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl33api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl33Api2" << std::endl;
        Lib16Core2Impl33Impl lib16core2impl33impl;
        lib16core2impl33impl.doSomething();
        Lib16Core2Impl34Api lib16core2impl34api;
        lib16core2impl34api.doSomething();
        visited = 1;
    }
}

