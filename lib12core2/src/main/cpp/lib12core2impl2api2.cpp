// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl2api24(int a, int b) {
    return a + b;
}

int Lib12Core2Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl2Api2" << std::endl;
        Lib12Core2Impl2Impl lib12core2impl2impl;
        lib12core2impl2impl.doSomething();
        Lib12Core2Impl3Api1 lib12core2impl3api1;
        lib12core2impl3api1.doSomething();
        Lib12Core2Impl3Api2 lib12core2impl3api2;
        lib12core2impl3api2.doSomething();
        Lib12Core2Impl3Api3 lib12core2impl3api3;
        lib12core2impl3api3.doSomething();
        visited = 1;
    }
}

