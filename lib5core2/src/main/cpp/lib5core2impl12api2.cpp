// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl12api24(int a, int b) {
    return a + b;
}

int Lib5Core2Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl12Api2" << std::endl;
        Lib5Core2Impl12Impl lib5core2impl12impl;
        lib5core2impl12impl.doSomething();
        Lib5Core2Impl13Api1 lib5core2impl13api1;
        lib5core2impl13api1.doSomething();
        Lib5Core2Impl13Api2 lib5core2impl13api2;
        lib5core2impl13api2.doSomething();
        Lib5Core2Impl13Api3 lib5core2impl13api3;
        lib5core2impl13api3.doSomething();
        visited = 1;
    }
}

