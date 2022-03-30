// GENERATED SOURCE FILE

#include "lib8api3_impl.h"
#include "lib8api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api34(int a, int b) {
    return a + b;
}

int Lib8Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3" << std::endl;
        Lib8Api3Impl1Api1 lib8api3impl1api1;
        lib8api3impl1api1.doSomething();
        Lib8Api3Impl1Api2 lib8api3impl1api2;
        lib8api3impl1api2.doSomething();
        Lib8Api3Impl1Api3 lib8api3impl1api3;
        lib8api3impl1api3.doSomething();
        visited = 1;
    }
}

