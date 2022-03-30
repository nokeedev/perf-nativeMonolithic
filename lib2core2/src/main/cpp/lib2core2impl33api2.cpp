// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl33api24(int a, int b) {
    return a + b;
}

int Lib2Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl33Api2" << std::endl;
        Lib2Core2Impl33Impl lib2core2impl33impl;
        lib2core2impl33impl.doSomething();
        Lib2Core2Impl34Api lib2core2impl34api;
        lib2core2impl34api.doSomething();
        visited = 1;
    }
}

