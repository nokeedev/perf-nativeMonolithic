// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl2api34(int a, int b) {
    return a + b;
}

int Lib7Core2Impl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl2Api3" << std::endl;
        Lib7Core2Impl2Impl lib7core2impl2impl;
        lib7core2impl2impl.doSomething();
        Lib7Core2Impl3Api1 lib7core2impl3api1;
        lib7core2impl3api1.doSomething();
        Lib7Core2Impl3Api2 lib7core2impl3api2;
        lib7core2impl3api2.doSomething();
        Lib7Core2Impl3Api3 lib7core2impl3api3;
        lib7core2impl3api3.doSomething();
        visited = 1;
    }
}

