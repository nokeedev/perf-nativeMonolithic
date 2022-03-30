// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl33api14(int a, int b) {
    return a + b;
}

int Lib9Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl33Api1" << std::endl;
        Lib9Core2Impl34Api lib9core2impl34api;
        lib9core2impl34api.doSomething();
        Lib9Core2Impl33Impl lib9core2impl33impl;
        lib9core2impl33impl.doSomething();
        visited = 1;
    }
}

