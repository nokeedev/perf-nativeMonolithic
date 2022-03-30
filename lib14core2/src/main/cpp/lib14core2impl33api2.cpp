// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl33api24(int a, int b) {
    return a + b;
}

int Lib14Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl33Api2" << std::endl;
        Lib14Core2Impl33Impl lib14core2impl33impl;
        lib14core2impl33impl.doSomething();
        Lib14Core2Impl34Api lib14core2impl34api;
        lib14core2impl34api.doSomething();
        visited = 1;
    }
}

