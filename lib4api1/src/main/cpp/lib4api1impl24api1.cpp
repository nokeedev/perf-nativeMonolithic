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
int lib4api1impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl24api14(int a, int b) {
    return a + b;
}

int Lib4Api1Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl24Api1" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl25Api1 lib4api1impl25api1;
        lib4api1impl25api1.doSomething();
        Lib4Api1Impl24Impl lib4api1impl24impl;
        lib4api1impl24impl.doSomething();
        Lib4Api1Impl25Api2 lib4api1impl25api2;
        lib4api1impl25api2.doSomething();
        Lib4Api1Impl25Api3 lib4api1impl25api3;
        lib4api1impl25api3.doSomething();
        visited = 1;
    }
}

