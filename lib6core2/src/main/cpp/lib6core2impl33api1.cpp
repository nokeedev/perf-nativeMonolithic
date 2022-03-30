// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl33api14(int a, int b) {
    return a + b;
}

int Lib6Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl33Api1" << std::endl;
        Lib6Core2Impl34Api lib6core2impl34api;
        lib6core2impl34api.doSomething();
        Lib6Core2Impl33Impl lib6core2impl33impl;
        lib6core2impl33impl.doSomething();
        visited = 1;
    }
}

