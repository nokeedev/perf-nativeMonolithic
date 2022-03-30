// GENERATED SOURCE FILE

#include "lib13core2_impl.h"
#include "lib13core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core24(int a, int b) {
    return a + b;
}

int Lib13Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2" << std::endl;
        Lib13Core2Impl1Api1 lib13core2impl1api1;
        lib13core2impl1api1.doSomething();
        Lib13Core2Impl1Api2 lib13core2impl1api2;
        lib13core2impl1api2.doSomething();
        Lib13Core2Impl1Api3 lib13core2impl1api3;
        lib13core2impl1api3.doSomething();
        visited = 1;
    }
}

