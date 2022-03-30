// GENERATED SOURCE FILE

#include "lib14core2_impl.h"
#include "lib14core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core24(int a, int b) {
    return a + b;
}

int Lib14Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2" << std::endl;
        Lib14Core2Impl1Api1 lib14core2impl1api1;
        lib14core2impl1api1.doSomething();
        Lib14Core2Impl1Api2 lib14core2impl1api2;
        lib14core2impl1api2.doSomething();
        Lib14Core2Impl1Api3 lib14core2impl1api3;
        lib14core2impl1api3.doSomething();
        visited = 1;
    }
}

