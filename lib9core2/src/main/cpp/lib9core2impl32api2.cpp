// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl32api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl32Api2" << std::endl;
        Lib9Core2Impl32Impl lib9core2impl32impl;
        lib9core2impl32impl.doSomething();
        Lib9Core2Impl33Api1 lib9core2impl33api1;
        lib9core2impl33api1.doSomething();
        Lib9Core2Impl33Api2 lib9core2impl33api2;
        lib9core2impl33api2.doSomething();
        Lib9Core2Impl33Api3 lib9core2impl33api3;
        lib9core2impl33api3.doSomething();
        visited = 1;
    }
}

