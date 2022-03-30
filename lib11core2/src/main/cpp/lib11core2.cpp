// GENERATED SOURCE FILE

#include "lib11core2_impl.h"
#include "lib11core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core24(int a, int b) {
    return a + b;
}

int Lib11Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2" << std::endl;
        Lib11Core2Impl1Api1 lib11core2impl1api1;
        lib11core2impl1api1.doSomething();
        Lib11Core2Impl1Api2 lib11core2impl1api2;
        lib11core2impl1api2.doSomething();
        Lib11Core2Impl1Api3 lib11core2impl1api3;
        lib11core2impl1api3.doSomething();
        visited = 1;
    }
}

