// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl33api14(int a, int b) {
    return a + b;
}

int Lib8Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl33Api1" << std::endl;
        Lib8Core2Impl34Api lib8core2impl34api;
        lib8core2impl34api.doSomething();
        Lib8Core2Impl33Impl lib8core2impl33impl;
        lib8core2impl33impl.doSomething();
        visited = 1;
    }
}

