// GENERATED SOURCE FILE

#include "lib17api2_impl.h"
#include "lib17api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api24(int a, int b) {
    return a + b;
}

int Lib17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2" << std::endl;
        Lib17Api2Impl1Api1 lib17api2impl1api1;
        lib17api2impl1api1.doSomething();
        Lib17Api2Impl1Api2 lib17api2impl1api2;
        lib17api2impl1api2.doSomething();
        Lib17Api2Impl1Api3 lib17api2impl1api3;
        lib17api2impl1api3.doSomething();
        visited = 1;
    }
}

