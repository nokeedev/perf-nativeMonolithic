// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl3api14(int a, int b) {
    return a + b;
}

int Lib11Core2Impl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl3Api1" << std::endl;
        Lib11Core2Impl4Api1 lib11core2impl4api1;
        lib11core2impl4api1.doSomething();
        Lib11Core2Impl3Impl lib11core2impl3impl;
        lib11core2impl3impl.doSomething();
        Lib11Core2Impl4Api2 lib11core2impl4api2;
        lib11core2impl4api2.doSomething();
        Lib11Core2Impl4Api3 lib11core2impl4api3;
        lib11core2impl4api3.doSomething();
        visited = 1;
    }
}

