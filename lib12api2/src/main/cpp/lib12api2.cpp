// GENERATED SOURCE FILE

#include "lib12api2_impl.h"
#include "lib12api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api24(int a, int b) {
    return a + b;
}

int Lib12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2" << std::endl;
        Lib12Api2Impl1Api1 lib12api2impl1api1;
        lib12api2impl1api1.doSomething();
        Lib12Api2Impl1Api2 lib12api2impl1api2;
        lib12api2impl1api2.doSomething();
        Lib12Api2Impl1Api3 lib12api2impl1api3;
        lib12api2impl1api3.doSomething();
        visited = 1;
    }
}

