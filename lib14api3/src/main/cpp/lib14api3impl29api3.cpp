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
int lib14api3impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl29api34(int a, int b) {
    return a + b;
}

int Lib14Api3Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl29Api3" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl29Impl lib14api3impl29impl;
        lib14api3impl29impl.doSomething();
        Lib14Api3Impl30Api1 lib14api3impl30api1;
        lib14api3impl30api1.doSomething();
        Lib14Api3Impl30Api2 lib14api3impl30api2;
        lib14api3impl30api2.doSomething();
        Lib14Api3Impl30Api3 lib14api3impl30api3;
        lib14api3impl30api3.doSomething();
        visited = 1;
    }
}

