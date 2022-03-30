// GENERATED SOURCE FILE

#include "lib11api2_impl.h"
#include "lib11api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api24(int a, int b) {
    return a + b;
}

int Lib11Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2" << std::endl;
        Lib11Api2Impl1Api1 lib11api2impl1api1;
        lib11api2impl1api1.doSomething();
        Lib11Api2Impl1Api2 lib11api2impl1api2;
        lib11api2impl1api2.doSomething();
        Lib11Api2Impl1Api3 lib11api2impl1api3;
        lib11api2impl1api3.doSomething();
        visited = 1;
    }
}

