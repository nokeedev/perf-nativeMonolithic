// GENERATED SOURCE FILE

#include "lib1api2_private.h"
#include "lib1api2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api2impl1core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl1core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl1core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl1core14(int a, int b) {
    return a + b;
}

int Lib1Api2Impl1Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl1Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl1Core1" << std::endl;
        visited = 1;
    }
}

