// GENERATED SOURCE FILE

#include "lib6api3_impl.h"
#include "lib6api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api34(int a, int b) {
    return a + b;
}

int Lib6Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3" << std::endl;
        Lib6Api3Impl1Api1 lib6api3impl1api1;
        lib6api3impl1api1.doSomething();
        Lib6Api3Impl1Api2 lib6api3impl1api2;
        lib6api3impl1api2.doSomething();
        Lib6Api3Impl1Api3 lib6api3impl1api3;
        lib6api3impl1api3.doSomething();
        visited = 1;
    }
}

