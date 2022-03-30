// GENERATED SOURCE FILE

#include "lib16api3_impl.h"
#include "lib16api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api34(int a, int b) {
    return a + b;
}

int Lib16Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3" << std::endl;
        Lib16Api3Impl1Api1 lib16api3impl1api1;
        lib16api3impl1api1.doSomething();
        Lib16Api3Impl1Api2 lib16api3impl1api2;
        lib16api3impl1api2.doSomething();
        Lib16Api3Impl1Api3 lib16api3impl1api3;
        lib16api3impl1api3.doSomething();
        visited = 1;
    }
}

