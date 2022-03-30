// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl12api24(int a, int b) {
    return a + b;
}

int Lib13Core2Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl12Api2" << std::endl;
        Lib13Core2Impl12Impl lib13core2impl12impl;
        lib13core2impl12impl.doSomething();
        Lib13Core2Impl13Api1 lib13core2impl13api1;
        lib13core2impl13api1.doSomething();
        Lib13Core2Impl13Api2 lib13core2impl13api2;
        lib13core2impl13api2.doSomething();
        Lib13Core2Impl13Api3 lib13core2impl13api3;
        lib13core2impl13api3.doSomething();
        visited = 1;
    }
}

