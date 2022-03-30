// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl27api24(int a, int b) {
    return a + b;
}

int Lib16Core1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl27Api2" << std::endl;
        Lib16Core1Impl27Impl lib16core1impl27impl;
        lib16core1impl27impl.doSomething();
        Lib16Core1Impl28Api1 lib16core1impl28api1;
        lib16core1impl28api1.doSomething();
        Lib16Core1Impl28Api2 lib16core1impl28api2;
        lib16core1impl28api2.doSomething();
        Lib16Core1Impl28Api3 lib16core1impl28api3;
        lib16core1impl28api3.doSomething();
        visited = 1;
    }
}

