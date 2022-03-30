// GENERATED SOURCE FILE

#include "lib16core2_impl.h"
#include "lib16core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core24(int a, int b) {
    return a + b;
}

int Lib16Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2" << std::endl;
        Lib16Core2Impl1Api1 lib16core2impl1api1;
        lib16core2impl1api1.doSomething();
        Lib16Core2Impl1Api2 lib16core2impl1api2;
        lib16core2impl1api2.doSomething();
        Lib16Core2Impl1Api3 lib16core2impl1api3;
        lib16core2impl1api3.doSomething();
        visited = 1;
    }
}

