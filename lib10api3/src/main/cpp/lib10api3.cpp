// GENERATED SOURCE FILE

#include "lib10api3_impl.h"
#include "lib10api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api34(int a, int b) {
    return a + b;
}

int Lib10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3" << std::endl;
        Lib10Api3Impl1Api1 lib10api3impl1api1;
        lib10api3impl1api1.doSomething();
        Lib10Api3Impl1Api2 lib10api3impl1api2;
        lib10api3impl1api2.doSomething();
        Lib10Api3Impl1Api3 lib10api3impl1api3;
        lib10api3impl1api3.doSomething();
        visited = 1;
    }
}

