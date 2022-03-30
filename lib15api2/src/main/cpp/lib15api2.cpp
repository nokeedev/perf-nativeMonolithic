// GENERATED SOURCE FILE

#include "lib15api2_impl.h"
#include "lib15api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api24(int a, int b) {
    return a + b;
}

int Lib15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2" << std::endl;
        Lib15Api2Impl1Api1 lib15api2impl1api1;
        lib15api2impl1api1.doSomething();
        Lib15Api2Impl1Api2 lib15api2impl1api2;
        lib15api2impl1api2.doSomething();
        Lib15Api2Impl1Api3 lib15api2impl1api3;
        lib15api2impl1api3.doSomething();
        visited = 1;
    }
}

