// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl28api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl28Api1" << std::endl;
        Lib15Core2Impl29Api1 lib15core2impl29api1;
        lib15core2impl29api1.doSomething();
        Lib15Core2Impl28Impl lib15core2impl28impl;
        lib15core2impl28impl.doSomething();
        Lib15Core2Impl29Api2 lib15core2impl29api2;
        lib15core2impl29api2.doSomething();
        Lib15Core2Impl29Api3 lib15core2impl29api3;
        lib15core2impl29api3.doSomething();
        visited = 1;
    }
}

