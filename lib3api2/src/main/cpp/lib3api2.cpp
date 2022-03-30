// GENERATED SOURCE FILE

#include "lib3api2_impl.h"
#include "lib3api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api24(int a, int b) {
    return a + b;
}

int Lib3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api2" << std::endl;
        Lib3Api2Impl1Api1 lib3api2impl1api1;
        lib3api2impl1api1.doSomething();
        Lib3Api2Impl1Api2 lib3api2impl1api2;
        lib3api2impl1api2.doSomething();
        Lib3Api2Impl1Api3 lib3api2impl1api3;
        lib3api2impl1api3.doSomething();
        visited = 1;
    }
}

