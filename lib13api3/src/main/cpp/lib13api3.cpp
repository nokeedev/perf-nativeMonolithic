// GENERATED SOURCE FILE

#include "lib13api3_impl.h"
#include "lib13api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api34(int a, int b) {
    return a + b;
}

int Lib13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3" << std::endl;
        Lib13Api3Impl1Api1 lib13api3impl1api1;
        lib13api3impl1api1.doSomething();
        Lib13Api3Impl1Api2 lib13api3impl1api2;
        lib13api3impl1api2.doSomething();
        Lib13Api3Impl1Api3 lib13api3impl1api3;
        lib13api3impl1api3.doSomething();
        visited = 1;
    }
}

