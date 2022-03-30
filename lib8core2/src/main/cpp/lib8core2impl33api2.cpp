// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl33api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl33Api2" << std::endl;
        Lib8Core2Impl33Impl lib8core2impl33impl;
        lib8core2impl33impl.doSomething();
        Lib8Core2Impl34Api lib8core2impl34api;
        lib8core2impl34api.doSomething();
        visited = 1;
    }
}

