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
int lib14api3impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl28api34(int a, int b) {
    return a + b;
}

int Lib14Api3Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl28Api3" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl28Impl lib14api3impl28impl;
        lib14api3impl28impl.doSomething();
        Lib14Api3Impl29Api1 lib14api3impl29api1;
        lib14api3impl29api1.doSomething();
        Lib14Api3Impl29Api2 lib14api3impl29api2;
        lib14api3impl29api2.doSomething();
        Lib14Api3Impl29Api3 lib14api3impl29api3;
        lib14api3impl29api3.doSomething();
        visited = 1;
    }
}

