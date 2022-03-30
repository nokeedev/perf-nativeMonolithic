// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl12api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl12Api2" << std::endl;
        Lib8Core2Impl12Impl lib8core2impl12impl;
        lib8core2impl12impl.doSomething();
        Lib8Core2Impl13Api1 lib8core2impl13api1;
        lib8core2impl13api1.doSomething();
        Lib8Core2Impl13Api2 lib8core2impl13api2;
        lib8core2impl13api2.doSomething();
        Lib8Core2Impl13Api3 lib8core2impl13api3;
        lib8core2impl13api3.doSomething();
        visited = 1;
    }
}

