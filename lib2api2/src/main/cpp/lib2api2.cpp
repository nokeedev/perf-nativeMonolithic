// GENERATED SOURCE FILE

#include "lib2api2_impl.h"
#include "lib2api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api24(int a, int b) {
    return a + b;
}

int Lib2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2" << std::endl;
        Lib2Api2Impl1Api1 lib2api2impl1api1;
        lib2api2impl1api1.doSomething();
        Lib2Api2Impl1Api2 lib2api2impl1api2;
        lib2api2impl1api2.doSomething();
        Lib2Api2Impl1Api3 lib2api2impl1api3;
        lib2api2impl1api3.doSomething();
        visited = 1;
    }
}

