// GENERATED SOURCE FILE

#include "lib11api3_impl.h"
#include "lib11api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api34(int a, int b) {
    return a + b;
}

int Lib11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3" << std::endl;
        Lib11Api3Impl1Api1 lib11api3impl1api1;
        lib11api3impl1api1.doSomething();
        Lib11Api3Impl1Api2 lib11api3impl1api2;
        lib11api3impl1api2.doSomething();
        Lib11Api3Impl1Api3 lib11api3impl1api3;
        lib11api3impl1api3.doSomething();
        visited = 1;
    }
}

