// GENERATED SOURCE FILE

#include "lib4api2_private.h"
#include "lib4api2_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api2impl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl7api14(int a, int b) {
    return a + b;
}

int Lib4Api2Impl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api2Impl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api2Impl7Api1" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api2Impl8Api1 lib4api2impl8api1;
        lib4api2impl8api1.doSomething();
        Lib4Api2Impl7Impl lib4api2impl7impl;
        lib4api2impl7impl.doSomething();
        Lib4Api2Impl8Api2 lib4api2impl8api2;
        lib4api2impl8api2.doSomething();
        Lib4Api2Impl8Api3 lib4api2impl8api3;
        lib4api2impl8api3.doSomething();
        visited = 1;
    }
}

