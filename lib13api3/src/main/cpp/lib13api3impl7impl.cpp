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
int lib13api3impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl7impl4(int a, int b) {
    return a + b;
}

int Lib13Api3Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl7Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl7Core1 lib13api3impl7core1;
        lib13api3impl7core1.doSomething();
        Lib13Api3Impl7Core2 lib13api3impl7core2;
        lib13api3impl7core2.doSomething();
        Lib13Api3Impl8Api1 lib13api3impl8api1;
        lib13api3impl8api1.doSomething();
        Lib13Api3Impl8Api2 lib13api3impl8api2;
        lib13api3impl8api2.doSomething();
        Lib13Api3Impl8Api3 lib13api3impl8api3;
        lib13api3impl8api3.doSomething();
        visited = 1;
    }
}

