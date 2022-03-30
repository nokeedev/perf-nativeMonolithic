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
int lib5api2impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl32api14(int a, int b) {
    return a + b;
}

int Lib5Api2Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl32Api1" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl33Api1 lib5api2impl33api1;
        lib5api2impl33api1.doSomething();
        Lib5Api2Impl32Impl lib5api2impl32impl;
        lib5api2impl32impl.doSomething();
        Lib5Api2Impl33Api2 lib5api2impl33api2;
        lib5api2impl33api2.doSomething();
        Lib5Api2Impl33Api3 lib5api2impl33api3;
        lib5api2impl33api3.doSomething();
        visited = 1;
    }
}

