// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl25api14(int a, int b) {
    return a + b;
}

int Lib2Core2Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl25Api1" << std::endl;
        Lib2Core2Impl26Api1 lib2core2impl26api1;
        lib2core2impl26api1.doSomething();
        Lib2Core2Impl25Impl lib2core2impl25impl;
        lib2core2impl25impl.doSomething();
        Lib2Core2Impl26Api2 lib2core2impl26api2;
        lib2core2impl26api2.doSomething();
        Lib2Core2Impl26Api3 lib2core2impl26api3;
        lib2core2impl26api3.doSomething();
        visited = 1;
    }
}

