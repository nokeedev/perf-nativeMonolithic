// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl33api14(int a, int b) {
    return a + b;
}

int Lib12Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl33Api1" << std::endl;
        Lib12Core2Impl34Api lib12core2impl34api;
        lib12core2impl34api.doSomething();
        Lib12Core2Impl33Impl lib12core2impl33impl;
        lib12core2impl33impl.doSomething();
        visited = 1;
    }
}

