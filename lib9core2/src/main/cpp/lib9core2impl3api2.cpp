// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl3Api2" << std::endl;
        Lib9Core2Impl3Impl lib9core2impl3impl;
        lib9core2impl3impl.doSomething();
        Lib9Core2Impl4Api1 lib9core2impl4api1;
        lib9core2impl4api1.doSomething();
        Lib9Core2Impl4Api2 lib9core2impl4api2;
        lib9core2impl4api2.doSomething();
        Lib9Core2Impl4Api3 lib9core2impl4api3;
        lib9core2impl4api3.doSomething();
        visited = 1;
    }
}
