// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl33api34(int a, int b) {
    return a + b;
}

int Lib9Core2Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl33Api3" << std::endl;
        Lib9Core2Impl33Impl lib9core2impl33impl;
        lib9core2impl33impl.doSomething();
        Lib9Core2Impl34Api lib9core2impl34api;
        lib9core2impl34api.doSomething();
        visited = 1;
    }
}

