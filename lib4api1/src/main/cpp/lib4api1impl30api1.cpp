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
int lib4api1impl30api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl30api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl30api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl30api14(int a, int b) {
    return a + b;
}

int Lib4Api1Impl30Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl30Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl30Api1" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl31Api1 lib4api1impl31api1;
        lib4api1impl31api1.doSomething();
        Lib4Api1Impl30Impl lib4api1impl30impl;
        lib4api1impl30impl.doSomething();
        Lib4Api1Impl31Api2 lib4api1impl31api2;
        lib4api1impl31api2.doSomething();
        Lib4Api1Impl31Api3 lib4api1impl31api3;
        lib4api1impl31api3.doSomething();
        visited = 1;
    }
}

