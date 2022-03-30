// GENERATED SOURCE FILE

#include "lib10api2_impl.h"
#include "lib10api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api24(int a, int b) {
    return a + b;
}

int Lib10Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2" << std::endl;
        Lib10Api2Impl1Api1 lib10api2impl1api1;
        lib10api2impl1api1.doSomething();
        Lib10Api2Impl1Api2 lib10api2impl1api2;
        lib10api2impl1api2.doSomething();
        Lib10Api2Impl1Api3 lib10api2impl1api3;
        lib10api2impl1api3.doSomething();
        visited = 1;
    }
}

