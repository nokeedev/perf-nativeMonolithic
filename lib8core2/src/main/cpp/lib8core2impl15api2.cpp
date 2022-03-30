// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl15api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl15Api2" << std::endl;
        Lib8Core2Impl15Impl lib8core2impl15impl;
        lib8core2impl15impl.doSomething();
        Lib8Core2Impl16Api1 lib8core2impl16api1;
        lib8core2impl16api1.doSomething();
        Lib8Core2Impl16Api2 lib8core2impl16api2;
        lib8core2impl16api2.doSomething();
        Lib8Core2Impl16Api3 lib8core2impl16api3;
        lib8core2impl16api3.doSomething();
        visited = 1;
    }
}

