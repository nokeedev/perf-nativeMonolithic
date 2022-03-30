// GENERATED SOURCE FILE

#include "lib5core2_impl.h"
#include "lib5core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core24(int a, int b) {
    return a + b;
}

int Lib5Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2" << std::endl;
        Lib5Core2Impl1Api1 lib5core2impl1api1;
        lib5core2impl1api1.doSomething();
        Lib5Core2Impl1Api2 lib5core2impl1api2;
        lib5core2impl1api2.doSomething();
        Lib5Core2Impl1Api3 lib5core2impl1api3;
        lib5core2impl1api3.doSomething();
        visited = 1;
    }
}

