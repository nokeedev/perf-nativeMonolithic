// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl33api24(int a, int b) {
    return a + b;
}

int Lib4Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl33Api2" << std::endl;
        Lib4Core2Impl33Impl lib4core2impl33impl;
        lib4core2impl33impl.doSomething();
        Lib4Core2Impl34Api lib4core2impl34api;
        lib4core2impl34api.doSomething();
        visited = 1;
    }
}

