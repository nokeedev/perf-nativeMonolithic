// GENERATED SOURCE FILE

#include "lib5api2_private.h"
#include "lib5api2_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api2impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl20api14(int a, int b) {
    return a + b;
}

int Lib5Api2Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl20Api1" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl21Api1 lib5api2impl21api1;
        lib5api2impl21api1.doSomething();
        Lib5Api2Impl20Impl lib5api2impl20impl;
        lib5api2impl20impl.doSomething();
        Lib5Api2Impl21Api2 lib5api2impl21api2;
        lib5api2impl21api2.doSomething();
        Lib5Api2Impl21Api3 lib5api2impl21api3;
        lib5api2impl21api3.doSomething();
        visited = 1;
    }
}

