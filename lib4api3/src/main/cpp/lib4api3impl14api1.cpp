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
int lib4api3impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl14api14(int a, int b) {
    return a + b;
}

int Lib4Api3Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl14Api1" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl15Api1 lib4api3impl15api1;
        lib4api3impl15api1.doSomething();
        Lib4Api3Impl14Impl lib4api3impl14impl;
        lib4api3impl14impl.doSomething();
        Lib4Api3Impl15Api2 lib4api3impl15api2;
        lib4api3impl15api2.doSomething();
        Lib4Api3Impl15Api3 lib4api3impl15api3;
        lib4api3impl15api3.doSomething();
        visited = 1;
    }
}

