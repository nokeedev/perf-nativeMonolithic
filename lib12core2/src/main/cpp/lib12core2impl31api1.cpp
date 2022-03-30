// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl31api14(int a, int b) {
    return a + b;
}

int Lib12Core2Impl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl31Api1" << std::endl;
        Lib12Core2Impl32Api1 lib12core2impl32api1;
        lib12core2impl32api1.doSomething();
        Lib12Core2Impl31Impl lib12core2impl31impl;
        lib12core2impl31impl.doSomething();
        Lib12Core2Impl32Api2 lib12core2impl32api2;
        lib12core2impl32api2.doSomething();
        Lib12Core2Impl32Api3 lib12core2impl32api3;
        lib12core2impl32api3.doSomething();
        visited = 1;
    }
}

