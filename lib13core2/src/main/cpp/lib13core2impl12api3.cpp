// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl12api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl12Api3" << std::endl;
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

