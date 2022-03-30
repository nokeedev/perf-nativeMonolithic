// GENERATED SOURCE FILE

#include "lib15core2_impl.h"
#include "lib15core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core24(int a, int b) {
    return a + b;
}

int Lib15Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2" << std::endl;
        Lib15Core2Impl1Api1 lib15core2impl1api1;
        lib15core2impl1api1.doSomething();
        Lib15Core2Impl1Api2 lib15core2impl1api2;
        lib15core2impl1api2.doSomething();
        Lib15Core2Impl1Api3 lib15core2impl1api3;
        lib15core2impl1api3.doSomething();
        visited = 1;
    }
}

