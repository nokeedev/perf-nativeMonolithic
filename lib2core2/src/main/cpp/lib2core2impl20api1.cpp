// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl20api14(int a, int b) {
    return a + b;
}

int Lib2Core2Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl20Api1" << std::endl;
        Lib2Core2Impl21Api1 lib2core2impl21api1;
        lib2core2impl21api1.doSomething();
        Lib2Core2Impl20Impl lib2core2impl20impl;
        lib2core2impl20impl.doSomething();
        Lib2Core2Impl21Api2 lib2core2impl21api2;
        lib2core2impl21api2.doSomething();
        Lib2Core2Impl21Api3 lib2core2impl21api3;
        lib2core2impl21api3.doSomething();
        visited = 1;
    }
}

