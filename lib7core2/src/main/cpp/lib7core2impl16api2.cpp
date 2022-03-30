// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl16api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl16Api2" << std::endl;
        Lib7Core2Impl16Impl lib7core2impl16impl;
        lib7core2impl16impl.doSomething();
        Lib7Core2Impl17Api1 lib7core2impl17api1;
        lib7core2impl17api1.doSomething();
        Lib7Core2Impl17Api2 lib7core2impl17api2;
        lib7core2impl17api2.doSomething();
        Lib7Core2Impl17Api3 lib7core2impl17api3;
        lib7core2impl17api3.doSomething();
        visited = 1;
    }
}

