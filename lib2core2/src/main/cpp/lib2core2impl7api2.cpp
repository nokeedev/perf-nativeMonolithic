// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl7api24(int a, int b) {
    return a + b;
}

int Lib2Core2Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl7Api2" << std::endl;
        Lib2Core2Impl7Impl lib2core2impl7impl;
        lib2core2impl7impl.doSomething();
        Lib2Core2Impl8Api1 lib2core2impl8api1;
        lib2core2impl8api1.doSomething();
        Lib2Core2Impl8Api2 lib2core2impl8api2;
        lib2core2impl8api2.doSomething();
        Lib2Core2Impl8Api3 lib2core2impl8api3;
        lib2core2impl8api3.doSomething();
        visited = 1;
    }
}

