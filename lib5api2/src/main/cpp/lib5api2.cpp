// GENERATED SOURCE FILE

#include "lib5api2_impl.h"
#include "lib5api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api24(int a, int b) {
    return a + b;
}

int Lib5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2" << std::endl;
        Lib5Api2Impl1Api1 lib5api2impl1api1;
        lib5api2impl1api1.doSomething();
        Lib5Api2Impl1Api2 lib5api2impl1api2;
        lib5api2impl1api2.doSomething();
        Lib5Api2Impl1Api3 lib5api2impl1api3;
        lib5api2impl1api3.doSomething();
        visited = 1;
    }
}

