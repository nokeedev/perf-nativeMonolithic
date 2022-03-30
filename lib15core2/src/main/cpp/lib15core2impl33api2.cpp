// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl33api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl33Api2" << std::endl;
        Lib15Core2Impl33Impl lib15core2impl33impl;
        lib15core2impl33impl.doSomething();
        Lib15Core2Impl34Api lib15core2impl34api;
        lib15core2impl34api.doSomething();
        visited = 1;
    }
}

