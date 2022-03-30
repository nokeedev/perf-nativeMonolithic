// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl30api24(int a, int b) {
    return a + b;
}

int Lib12Core2Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl30Api2" << std::endl;
        Lib12Core2Impl30Impl lib12core2impl30impl;
        lib12core2impl30impl.doSomething();
        Lib12Core2Impl31Api1 lib12core2impl31api1;
        lib12core2impl31api1.doSomething();
        Lib12Core2Impl31Api2 lib12core2impl31api2;
        lib12core2impl31api2.doSomething();
        Lib12Core2Impl31Api3 lib12core2impl31api3;
        lib12core2impl31api3.doSomething();
        visited = 1;
    }
}

