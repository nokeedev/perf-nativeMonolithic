// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl28api24(int a, int b) {
    return a + b;
}

int Lib2Core2Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl28Api2" << std::endl;
        Lib2Core2Impl28Impl lib2core2impl28impl;
        lib2core2impl28impl.doSomething();
        Lib2Core2Impl29Api1 lib2core2impl29api1;
        lib2core2impl29api1.doSomething();
        Lib2Core2Impl29Api2 lib2core2impl29api2;
        lib2core2impl29api2.doSomething();
        Lib2Core2Impl29Api3 lib2core2impl29api3;
        lib2core2impl29api3.doSomething();
        visited = 1;
    }
}

