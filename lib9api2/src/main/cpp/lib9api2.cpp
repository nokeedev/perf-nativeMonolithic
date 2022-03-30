// GENERATED SOURCE FILE

#include "lib9api2_impl.h"
#include "lib9api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api24(int a, int b) {
    return a + b;
}

int Lib9Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2" << std::endl;
        Lib9Api2Impl1Api1 lib9api2impl1api1;
        lib9api2impl1api1.doSomething();
        Lib9Api2Impl1Api2 lib9api2impl1api2;
        lib9api2impl1api2.doSomething();
        Lib9Api2Impl1Api3 lib9api2impl1api3;
        lib9api2impl1api3.doSomething();
        visited = 1;
    }
}

