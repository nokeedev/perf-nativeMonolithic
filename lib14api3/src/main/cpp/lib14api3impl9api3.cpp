// GENERATED SOURCE FILE

#include "lib14api3_private.h"
#include "lib14api3_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api3impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl9api34(int a, int b) {
    return a + b;
}

int Lib14Api3Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl9Api3" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl9Impl lib14api3impl9impl;
        lib14api3impl9impl.doSomething();
        Lib14Api3Impl10Api1 lib14api3impl10api1;
        lib14api3impl10api1.doSomething();
        Lib14Api3Impl10Api2 lib14api3impl10api2;
        lib14api3impl10api2.doSomething();
        Lib14Api3Impl10Api3 lib14api3impl10api3;
        lib14api3impl10api3.doSomething();
        visited = 1;
    }
}

