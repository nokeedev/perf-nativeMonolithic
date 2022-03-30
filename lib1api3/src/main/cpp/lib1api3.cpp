// GENERATED SOURCE FILE

#include "lib1api3_impl.h"
#include "lib1api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api34(int a, int b) {
    return a + b;
}

int Lib1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3" << std::endl;
        Lib1Api3Impl1Api1 lib1api3impl1api1;
        lib1api3impl1api1.doSomething();
        Lib1Api3Impl1Api2 lib1api3impl1api2;
        lib1api3impl1api2.doSomething();
        Lib1Api3Impl1Api3 lib1api3impl1api3;
        lib1api3impl1api3.doSomething();
        visited = 1;
    }
}

