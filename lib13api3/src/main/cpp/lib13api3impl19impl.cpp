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
int lib13api3impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl19impl4(int a, int b) {
    return a + b;
}

int Lib13Api3Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl19Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl19Core1 lib13api3impl19core1;
        lib13api3impl19core1.doSomething();
        Lib13Api3Impl19Core2 lib13api3impl19core2;
        lib13api3impl19core2.doSomething();
        Lib13Api3Impl20Api1 lib13api3impl20api1;
        lib13api3impl20api1.doSomething();
        Lib13Api3Impl20Api2 lib13api3impl20api2;
        lib13api3impl20api2.doSomething();
        Lib13Api3Impl20Api3 lib13api3impl20api3;
        lib13api3impl20api3.doSomething();
        visited = 1;
    }
}

