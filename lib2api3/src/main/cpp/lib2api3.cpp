// GENERATED SOURCE FILE

#include "lib2api3_impl.h"
#include "lib2api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api34(int a, int b) {
    return a + b;
}

int Lib2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3" << std::endl;
        Lib2Api3Impl1Api1 lib2api3impl1api1;
        lib2api3impl1api1.doSomething();
        Lib2Api3Impl1Api2 lib2api3impl1api2;
        lib2api3impl1api2.doSomething();
        Lib2Api3Impl1Api3 lib2api3impl1api3;
        lib2api3impl1api3.doSomething();
        visited = 1;
    }
}

