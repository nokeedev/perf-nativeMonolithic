// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl34api4(int a, int b) {
    return a + b;
}

int Lib9Core2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl34Api" << std::endl;
        Lib9Core2Impl34Core lib9core2impl34core;
        lib9core2impl34core.doSomething();
        visited = 1;
    }
}

