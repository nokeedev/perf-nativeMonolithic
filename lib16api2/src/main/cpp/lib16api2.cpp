// GENERATED SOURCE FILE

#include "lib16api2_impl.h"
#include "lib16api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api24(int a, int b) {
    return a + b;
}

int Lib16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2" << std::endl;
        Lib16Api2Impl1Api1 lib16api2impl1api1;
        lib16api2impl1api1.doSomething();
        Lib16Api2Impl1Api2 lib16api2impl1api2;
        lib16api2impl1api2.doSomething();
        Lib16Api2Impl1Api3 lib16api2impl1api3;
        lib16api2impl1api3.doSomething();
        visited = 1;
    }
}

