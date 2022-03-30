// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl30api24(int a, int b) {
    return a + b;
}

int Lib2Core2Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl30Api2" << std::endl;
        Lib2Core2Impl30Impl lib2core2impl30impl;
        lib2core2impl30impl.doSomething();
        Lib2Core2Impl31Api1 lib2core2impl31api1;
        lib2core2impl31api1.doSomething();
        Lib2Core2Impl31Api2 lib2core2impl31api2;
        lib2core2impl31api2.doSomething();
        Lib2Core2Impl31Api3 lib2core2impl31api3;
        lib2core2impl31api3.doSomething();
        visited = 1;
    }
}

