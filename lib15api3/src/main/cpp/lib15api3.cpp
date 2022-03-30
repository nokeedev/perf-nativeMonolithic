// GENERATED SOURCE FILE

#include "lib15api3_impl.h"
#include "lib15api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api34(int a, int b) {
    return a + b;
}

int Lib15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3" << std::endl;
        Lib15Api3Impl1Api1 lib15api3impl1api1;
        lib15api3impl1api1.doSomething();
        Lib15Api3Impl1Api2 lib15api3impl1api2;
        lib15api3impl1api2.doSomething();
        Lib15Api3Impl1Api3 lib15api3impl1api3;
        lib15api3impl1api3.doSomething();
        visited = 1;
    }
}

