// GENERATED SOURCE FILE

#include "lib6api2_impl.h"
#include "lib6api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api24(int a, int b) {
    return a + b;
}

int Lib6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2" << std::endl;
        Lib6Api2Impl1Api1 lib6api2impl1api1;
        lib6api2impl1api1.doSomething();
        Lib6Api2Impl1Api2 lib6api2impl1api2;
        lib6api2impl1api2.doSomething();
        Lib6Api2Impl1Api3 lib6api2impl1api3;
        lib6api2impl1api3.doSomething();
        visited = 1;
    }
}

