// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3api34(int a, int b) {
    return a + b;
}

int Lib9Core2Impl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl3Api3" << std::endl;
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

