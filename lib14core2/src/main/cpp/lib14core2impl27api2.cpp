// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl27api24(int a, int b) {
    return a + b;
}

int Lib14Core2Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl27Api2" << std::endl;
        Lib14Core2Impl27Impl lib14core2impl27impl;
        lib14core2impl27impl.doSomething();
        Lib14Core2Impl28Api1 lib14core2impl28api1;
        lib14core2impl28api1.doSomething();
        Lib14Core2Impl28Api2 lib14core2impl28api2;
        lib14core2impl28api2.doSomething();
        Lib14Core2Impl28Api3 lib14core2impl28api3;
        lib14core2impl28api3.doSomething();
        visited = 1;
    }
}

