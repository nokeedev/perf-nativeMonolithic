// GENERATED SOURCE FILE

#include "lib5api3_private.h"
#include "lib5api3_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api3impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl1api14(int a, int b) {
    return a + b;
}

int Lib5Api3Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl1Api1" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl2Api1 lib5api3impl2api1;
        lib5api3impl2api1.doSomething();
        Lib5Api3Impl1Impl lib5api3impl1impl;
        lib5api3impl1impl.doSomething();
        Lib5Api3Impl2Api2 lib5api3impl2api2;
        lib5api3impl2api2.doSomething();
        Lib5Api3Impl2Api3 lib5api3impl2api3;
        lib5api3impl2api3.doSomething();
        visited = 1;
    }
}

