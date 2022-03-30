// GENERATED SOURCE FILE

#include "lib13api2_impl.h"
#include "lib13api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api24(int a, int b) {
    return a + b;
}

int Lib13Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2" << std::endl;
        Lib13Api2Impl1Api1 lib13api2impl1api1;
        lib13api2impl1api1.doSomething();
        Lib13Api2Impl1Api2 lib13api2impl1api2;
        lib13api2impl1api2.doSomething();
        Lib13Api2Impl1Api3 lib13api2impl1api3;
        lib13api2impl1api3.doSomething();
        visited = 1;
    }
}

