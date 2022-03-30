// GENERATED SOURCE FILE

#include "lib10core2_impl.h"
#include "lib10core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core24(int a, int b) {
    return a + b;
}

int Lib10Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2" << std::endl;
        Lib10Core2Impl1Api1 lib10core2impl1api1;
        lib10core2impl1api1.doSomething();
        Lib10Core2Impl1Api2 lib10core2impl1api2;
        lib10core2impl1api2.doSomething();
        Lib10Core2Impl1Api3 lib10core2impl1api3;
        lib10core2impl1api3.doSomething();
        visited = 1;
    }
}

