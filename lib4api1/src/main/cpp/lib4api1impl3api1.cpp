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
int lib4api1impl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl3api14(int a, int b) {
    return a + b;
}

int Lib4Api1Impl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl3Api1" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl4Api1 lib4api1impl4api1;
        lib4api1impl4api1.doSomething();
        Lib4Api1Impl3Impl lib4api1impl3impl;
        lib4api1impl3impl.doSomething();
        Lib4Api1Impl4Api2 lib4api1impl4api2;
        lib4api1impl4api2.doSomething();
        Lib4Api1Impl4Api3 lib4api1impl4api3;
        lib4api1impl4api3.doSomething();
        visited = 1;
    }
}

