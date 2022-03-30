// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl2api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl2Api2" << std::endl;
        Lib9Core2Impl2Impl lib9core2impl2impl;
        lib9core2impl2impl.doSomething();
        Lib9Core2Impl3Api1 lib9core2impl3api1;
        lib9core2impl3api1.doSomething();
        Lib9Core2Impl3Api2 lib9core2impl3api2;
        lib9core2impl3api2.doSomething();
        Lib9Core2Impl3Api3 lib9core2impl3api3;
        lib9core2impl3api3.doSomething();
        visited = 1;
    }
}

