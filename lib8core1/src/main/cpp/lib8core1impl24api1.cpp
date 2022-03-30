// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl24api14(int a, int b) {
    return a + b;
}

int Lib8Core1Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl24Api1" << std::endl;
        Lib8Core1Impl25Api1 lib8core1impl25api1;
        lib8core1impl25api1.doSomething();
        Lib8Core1Impl24Impl lib8core1impl24impl;
        lib8core1impl24impl.doSomething();
        Lib8Core1Impl25Api2 lib8core1impl25api2;
        lib8core1impl25api2.doSomething();
        Lib8Core1Impl25Api3 lib8core1impl25api3;
        lib8core1impl25api3.doSomething();
        visited = 1;
    }
}

