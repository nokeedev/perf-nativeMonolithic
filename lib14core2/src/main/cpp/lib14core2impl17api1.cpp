// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl17api14(int a, int b) {
    return a + b;
}

int Lib14Core2Impl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl17Api1" << std::endl;
        Lib14Core2Impl18Api1 lib14core2impl18api1;
        lib14core2impl18api1.doSomething();
        Lib14Core2Impl17Impl lib14core2impl17impl;
        lib14core2impl17impl.doSomething();
        Lib14Core2Impl18Api2 lib14core2impl18api2;
        lib14core2impl18api2.doSomething();
        Lib14Core2Impl18Api3 lib14core2impl18api3;
        lib14core2impl18api3.doSomething();
        visited = 1;
    }
}
