// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl3api14(int a, int b) {
    return a + b;
}

int Lib8Core2Impl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl3Api1" << std::endl;
        Lib8Core2Impl4Api1 lib8core2impl4api1;
        lib8core2impl4api1.doSomething();
        Lib8Core2Impl3Impl lib8core2impl3impl;
        lib8core2impl3impl.doSomething();
        Lib8Core2Impl4Api2 lib8core2impl4api2;
        lib8core2impl4api2.doSomething();
        Lib8Core2Impl4Api3 lib8core2impl4api3;
        lib8core2impl4api3.doSomething();
        visited = 1;
    }
}

