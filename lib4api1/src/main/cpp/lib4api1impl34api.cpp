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
int lib4api1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl34api4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl34Api" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl34Core lib4api1impl34core;
        lib4api1impl34core.doSomething();
        visited = 1;
    }
}

