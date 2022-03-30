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
int lib4api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl34api4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl34Api" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl34Core lib4api3impl34core;
        lib4api3impl34core.doSomething();
        visited = 1;
    }
}

