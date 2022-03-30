// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl27api14(int a, int b) {
    return a + b;
}

int Lib16Core2Impl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl27Api1" << std::endl;
        Lib16Core2Impl28Api1 lib16core2impl28api1;
        lib16core2impl28api1.doSomething();
        Lib16Core2Impl27Impl lib16core2impl27impl;
        lib16core2impl27impl.doSomething();
        Lib16Core2Impl28Api2 lib16core2impl28api2;
        lib16core2impl28api2.doSomething();
        Lib16Core2Impl28Api3 lib16core2impl28api3;
        lib16core2impl28api3.doSomething();
        visited = 1;
    }
}

