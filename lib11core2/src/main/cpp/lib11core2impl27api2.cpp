// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl27api24(int a, int b) {
    return a + b;
}

int Lib11Core2Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl27Api2" << std::endl;
        Lib11Core2Impl27Impl lib11core2impl27impl;
        lib11core2impl27impl.doSomething();
        Lib11Core2Impl28Api1 lib11core2impl28api1;
        lib11core2impl28api1.doSomething();
        Lib11Core2Impl28Api2 lib11core2impl28api2;
        lib11core2impl28api2.doSomething();
        Lib11Core2Impl28Api3 lib11core2impl28api3;
        lib11core2impl28api3.doSomething();
        visited = 1;
    }
}

