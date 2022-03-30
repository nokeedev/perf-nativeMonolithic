// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl29api14(int a, int b) {
    return a + b;
}

int Lib2Core2Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl29Api1" << std::endl;
        Lib2Core2Impl30Api1 lib2core2impl30api1;
        lib2core2impl30api1.doSomething();
        Lib2Core2Impl29Impl lib2core2impl29impl;
        lib2core2impl29impl.doSomething();
        Lib2Core2Impl30Api2 lib2core2impl30api2;
        lib2core2impl30api2.doSomething();
        Lib2Core2Impl30Api3 lib2core2impl30api3;
        lib2core2impl30api3.doSomething();
        visited = 1;
    }
}

