// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl33api14(int a, int b) {
    return a + b;
}

int Lib7Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl33Api1" << std::endl;
        Lib7Core2Impl34Api lib7core2impl34api;
        lib7core2impl34api.doSomething();
        Lib7Core2Impl33Impl lib7core2impl33impl;
        lib7core2impl33impl.doSomething();
        visited = 1;
    }
}

