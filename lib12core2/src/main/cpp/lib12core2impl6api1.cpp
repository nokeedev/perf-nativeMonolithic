// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl6api14(int a, int b) {
    return a + b;
}

int Lib12Core2Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl6Api1" << std::endl;
        Lib12Core2Impl7Api1 lib12core2impl7api1;
        lib12core2impl7api1.doSomething();
        Lib12Core2Impl6Impl lib12core2impl6impl;
        lib12core2impl6impl.doSomething();
        Lib12Core2Impl7Api2 lib12core2impl7api2;
        lib12core2impl7api2.doSomething();
        Lib12Core2Impl7Api3 lib12core2impl7api3;
        lib12core2impl7api3.doSomething();
        visited = 1;
    }
}

