// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl16api24(int a, int b) {
    return a + b;
}

int Lib11Core2Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl16Api2" << std::endl;
        Lib11Core2Impl16Impl lib11core2impl16impl;
        lib11core2impl16impl.doSomething();
        Lib11Core2Impl17Api1 lib11core2impl17api1;
        lib11core2impl17api1.doSomething();
        Lib11Core2Impl17Api2 lib11core2impl17api2;
        lib11core2impl17api2.doSomething();
        Lib11Core2Impl17Api3 lib11core2impl17api3;
        lib11core2impl17api3.doSomething();
        visited = 1;
    }
}

