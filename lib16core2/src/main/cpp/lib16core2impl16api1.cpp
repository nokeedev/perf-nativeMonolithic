// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl16api14(int a, int b) {
    return a + b;
}

int Lib16Core2Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl16Api1" << std::endl;
        Lib16Core2Impl17Api1 lib16core2impl17api1;
        lib16core2impl17api1.doSomething();
        Lib16Core2Impl16Impl lib16core2impl16impl;
        lib16core2impl16impl.doSomething();
        Lib16Core2Impl17Api2 lib16core2impl17api2;
        lib16core2impl17api2.doSomething();
        Lib16Core2Impl17Api3 lib16core2impl17api3;
        lib16core2impl17api3.doSomething();
        visited = 1;
    }
}

