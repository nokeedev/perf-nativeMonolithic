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
int lib13api3impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl25api14(int a, int b) {
    return a + b;
}

int Lib13Api3Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl25Api1" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl26Api1 lib13api3impl26api1;
        lib13api3impl26api1.doSomething();
        Lib13Api3Impl25Impl lib13api3impl25impl;
        lib13api3impl25impl.doSomething();
        Lib13Api3Impl26Api2 lib13api3impl26api2;
        lib13api3impl26api2.doSomething();
        Lib13Api3Impl26Api3 lib13api3impl26api3;
        lib13api3impl26api3.doSomething();
        visited = 1;
    }
}

