// GENERATED SOURCE FILE

#include "lib6api3_private.h"
#include "lib6api3_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api3impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl1api14(int a, int b) {
    return a + b;
}

int Lib6Api3Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl1Api1" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl2Api1 lib6api3impl2api1;
        lib6api3impl2api1.doSomething();
        Lib6Api3Impl1Impl lib6api3impl1impl;
        lib6api3impl1impl.doSomething();
        Lib6Api3Impl2Api2 lib6api3impl2api2;
        lib6api3impl2api2.doSomething();
        Lib6Api3Impl2Api3 lib6api3impl2api3;
        lib6api3impl2api3.doSomething();
        visited = 1;
    }
}

