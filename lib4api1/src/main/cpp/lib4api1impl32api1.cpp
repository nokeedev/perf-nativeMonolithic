// GENERATED SOURCE FILE

#include "lib4api1_private.h"
#include "lib4api1_impl.h"
#include "lib5api1.h"
#include "lib4impl.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api1impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl32api14(int a, int b) {
    return a + b;
}

int Lib4Api1Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl32Api1" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl33Api1 lib4api1impl33api1;
        lib4api1impl33api1.doSomething();
        Lib4Api1Impl32Impl lib4api1impl32impl;
        lib4api1impl32impl.doSomething();
        Lib4Api1Impl33Api2 lib4api1impl33api2;
        lib4api1impl33api2.doSomething();
        Lib4Api1Impl33Api3 lib4api1impl33api3;
        lib4api1impl33api3.doSomething();
        visited = 1;
    }
}

