// GENERATED SOURCE FILE

#include "lib9api3_impl.h"
#include "lib9api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api34(int a, int b) {
    return a + b;
}

int Lib9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api3" << std::endl;
        Lib9Api3Impl1Api1 lib9api3impl1api1;
        lib9api3impl1api1.doSomething();
        Lib9Api3Impl1Api2 lib9api3impl1api2;
        lib9api3impl1api2.doSomething();
        Lib9Api3Impl1Api3 lib9api3impl1api3;
        lib9api3impl1api3.doSomething();
        visited = 1;
    }
}

