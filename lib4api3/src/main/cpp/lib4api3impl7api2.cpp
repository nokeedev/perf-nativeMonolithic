// GENERATED SOURCE FILE

#include "lib4api3_private.h"
#include "lib4api3_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api3impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl7api24(int a, int b) {
    return a + b;
}

int Lib4Api3Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl7Api2" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl7Impl lib4api3impl7impl;
        lib4api3impl7impl.doSomething();
        Lib4Api3Impl8Api1 lib4api3impl8api1;
        lib4api3impl8api1.doSomething();
        Lib4Api3Impl8Api2 lib4api3impl8api2;
        lib4api3impl8api2.doSomething();
        Lib4Api3Impl8Api3 lib4api3impl8api3;
        lib4api3impl8api3.doSomething();
        visited = 1;
    }
}

