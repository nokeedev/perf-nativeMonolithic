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
int lib6api3impl14api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl14api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl14api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl14api24(int a, int b) {
    return a + b;
}

int Lib6Api3Impl14Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl14Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl14Api2" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl14Impl lib6api3impl14impl;
        lib6api3impl14impl.doSomething();
        Lib6Api3Impl15Api1 lib6api3impl15api1;
        lib6api3impl15api1.doSomething();
        Lib6Api3Impl15Api2 lib6api3impl15api2;
        lib6api3impl15api2.doSomething();
        Lib6Api3Impl15Api3 lib6api3impl15api3;
        lib6api3impl15api3.doSomething();
        visited = 1;
    }
}

