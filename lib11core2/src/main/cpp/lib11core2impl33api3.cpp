// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl33api34(int a, int b) {
    return a + b;
}

int Lib11Core2Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl33Api3" << std::endl;
        Lib11Core2Impl33Impl lib11core2impl33impl;
        lib11core2impl33impl.doSomething();
        Lib11Core2Impl34Api lib11core2impl34api;
        lib11core2impl34api.doSomething();
        visited = 1;
    }
}

