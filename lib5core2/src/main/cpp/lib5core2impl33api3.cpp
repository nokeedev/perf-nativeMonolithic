// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl33api34(int a, int b) {
    return a + b;
}

int Lib5Core2Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl33Api3" << std::endl;
        Lib5Core2Impl33Impl lib5core2impl33impl;
        lib5core2impl33impl.doSomething();
        Lib5Core2Impl34Api lib5core2impl34api;
        lib5core2impl34api.doSomething();
        visited = 1;
    }
}

