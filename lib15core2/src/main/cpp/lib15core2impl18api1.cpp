// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl18api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl18api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl18api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl18api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl18Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl18Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl18Api1" << std::endl;
        Lib15Core2Impl19Api1 lib15core2impl19api1;
        lib15core2impl19api1.doSomething();
        Lib15Core2Impl18Impl lib15core2impl18impl;
        lib15core2impl18impl.doSomething();
        Lib15Core2Impl19Api2 lib15core2impl19api2;
        lib15core2impl19api2.doSomething();
        Lib15Core2Impl19Api3 lib15core2impl19api3;
        lib15core2impl19api3.doSomething();
        visited = 1;
    }
}

