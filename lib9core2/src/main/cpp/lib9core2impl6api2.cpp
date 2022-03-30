// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl6api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl6Api2" << std::endl;
        Lib9Core2Impl6Impl lib9core2impl6impl;
        lib9core2impl6impl.doSomething();
        Lib9Core2Impl7Api1 lib9core2impl7api1;
        lib9core2impl7api1.doSomething();
        Lib9Core2Impl7Api2 lib9core2impl7api2;
        lib9core2impl7api2.doSomething();
        Lib9Core2Impl7Api3 lib9core2impl7api3;
        lib9core2impl7api3.doSomething();
        visited = 1;
    }
}

