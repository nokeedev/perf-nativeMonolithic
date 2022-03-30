// GENERATED SOURCE FILE

#include "lib7api3_impl.h"
#include "lib7api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api34(int a, int b) {
    return a + b;
}

int Lib7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3" << std::endl;
        Lib7Api3Impl1Api1 lib7api3impl1api1;
        lib7api3impl1api1.doSomething();
        Lib7Api3Impl1Api2 lib7api3impl1api2;
        lib7api3impl1api2.doSomething();
        Lib7Api3Impl1Api3 lib7api3impl1api3;
        lib7api3impl1api3.doSomething();
        visited = 1;
    }
}

