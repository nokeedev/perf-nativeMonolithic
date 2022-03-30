// GENERATED SOURCE FILE

#include "lib8api2_impl.h"
#include "lib8api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api24(int a, int b) {
    return a + b;
}

int Lib8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2" << std::endl;
        Lib8Api2Impl1Api1 lib8api2impl1api1;
        lib8api2impl1api1.doSomething();
        Lib8Api2Impl1Api2 lib8api2impl1api2;
        lib8api2impl1api2.doSomething();
        Lib8Api2Impl1Api3 lib8api2impl1api3;
        lib8api2impl1api3.doSomething();
        visited = 1;
    }
}

