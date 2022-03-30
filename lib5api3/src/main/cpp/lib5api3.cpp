// GENERATED SOURCE FILE

#include "lib5api3_impl.h"
#include "lib5api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api34(int a, int b) {
    return a + b;
}

int Lib5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3" << std::endl;
        Lib5Api3Impl1Api1 lib5api3impl1api1;
        lib5api3impl1api1.doSomething();
        Lib5Api3Impl1Api2 lib5api3impl1api2;
        lib5api3impl1api2.doSomething();
        Lib5Api3Impl1Api3 lib5api3impl1api3;
        lib5api3impl1api3.doSomething();
        visited = 1;
    }
}

