// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl19api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl19Api2" << std::endl;
        Lib9Core2Impl19Impl lib9core2impl19impl;
        lib9core2impl19impl.doSomething();
        Lib9Core2Impl20Api1 lib9core2impl20api1;
        lib9core2impl20api1.doSomething();
        Lib9Core2Impl20Api2 lib9core2impl20api2;
        lib9core2impl20api2.doSomething();
        Lib9Core2Impl20Api3 lib9core2impl20api3;
        lib9core2impl20api3.doSomething();
        visited = 1;
    }
}

