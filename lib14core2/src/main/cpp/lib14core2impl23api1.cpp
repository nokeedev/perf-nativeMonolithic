// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl23api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl23api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl23api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl23api14(int a, int b) {
    return a + b;
}

int Lib14Core2Impl23Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl23Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl23Api1" << std::endl;
        Lib14Core2Impl24Api1 lib14core2impl24api1;
        lib14core2impl24api1.doSomething();
        Lib14Core2Impl23Impl lib14core2impl23impl;
        lib14core2impl23impl.doSomething();
        Lib14Core2Impl24Api2 lib14core2impl24api2;
        lib14core2impl24api2.doSomething();
        Lib14Core2Impl24Api3 lib14core2impl24api3;
        lib14core2impl24api3.doSomething();
        visited = 1;
    }
}

