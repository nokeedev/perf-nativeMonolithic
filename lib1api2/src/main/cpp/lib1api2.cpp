// GENERATED SOURCE FILE

#include "lib1api2_impl.h"
#include "lib1api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api24(int a, int b) {
    return a + b;
}

int Lib1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2" << std::endl;
        Lib1Api2Impl1Api1 lib1api2impl1api1;
        lib1api2impl1api1.doSomething();
        Lib1Api2Impl1Api2 lib1api2impl1api2;
        lib1api2impl1api2.doSomething();
        Lib1Api2Impl1Api3 lib1api2impl1api3;
        lib1api2impl1api3.doSomething();
        visited = 1;
    }
}

