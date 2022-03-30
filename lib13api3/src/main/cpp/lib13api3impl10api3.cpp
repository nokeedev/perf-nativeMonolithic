// GENERATED SOURCE FILE

#include "lib13api3_private.h"
#include "lib13api3_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api3impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl10api34(int a, int b) {
    return a + b;
}

int Lib13Api3Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl10Api3" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl10Impl lib13api3impl10impl;
        lib13api3impl10impl.doSomething();
        Lib13Api3Impl11Api1 lib13api3impl11api1;
        lib13api3impl11api1.doSomething();
        Lib13Api3Impl11Api2 lib13api3impl11api2;
        lib13api3impl11api2.doSomething();
        Lib13Api3Impl11Api3 lib13api3impl11api3;
        lib13api3impl11api3.doSomething();
        visited = 1;
    }
}

