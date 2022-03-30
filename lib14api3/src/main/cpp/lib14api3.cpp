// GENERATED SOURCE FILE

#include "lib14api3_impl.h"
#include "lib14api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api34(int a, int b) {
    return a + b;
}

int Lib14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3" << std::endl;
        Lib14Api3Impl1Api1 lib14api3impl1api1;
        lib14api3impl1api1.doSomething();
        Lib14Api3Impl1Api2 lib14api3impl1api2;
        lib14api3impl1api2.doSomething();
        Lib14Api3Impl1Api3 lib14api3impl1api3;
        lib14api3impl1api3.doSomething();
        visited = 1;
    }
}

