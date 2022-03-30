// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl33api34(int a, int b) {
    return a + b;
}

int Lib7Core2Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl33Api3" << std::endl;
        Lib7Core2Impl33Impl lib7core2impl33impl;
        lib7core2impl33impl.doSomething();
        Lib7Core2Impl34Api lib7core2impl34api;
        lib7core2impl34api.doSomething();
        visited = 1;
    }
}

