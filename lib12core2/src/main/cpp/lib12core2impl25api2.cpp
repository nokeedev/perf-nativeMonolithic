// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl25api24(int a, int b) {
    return a + b;
}

int Lib12Core2Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl25Api2" << std::endl;
        Lib12Core2Impl25Impl lib12core2impl25impl;
        lib12core2impl25impl.doSomething();
        Lib12Core2Impl26Api1 lib12core2impl26api1;
        lib12core2impl26api1.doSomething();
        Lib12Core2Impl26Api2 lib12core2impl26api2;
        lib12core2impl26api2.doSomething();
        Lib12Core2Impl26Api3 lib12core2impl26api3;
        lib12core2impl26api3.doSomething();
        visited = 1;
    }
}

