// GENERATED SOURCE FILE

#include "lib6api1_private.h"
#include "lib6api1_impl.h"
#include "lib7api1.h"
#include "lib6impl.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api1impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl20api24(int a, int b) {
    return a + b;
}

int Lib6Api1Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl20Api2" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl20Impl lib6api1impl20impl;
        lib6api1impl20impl.doSomething();
        Lib6Api1Impl21Api1 lib6api1impl21api1;
        lib6api1impl21api1.doSomething();
        Lib6Api1Impl21Api2 lib6api1impl21api2;
        lib6api1impl21api2.doSomething();
        Lib6Api1Impl21Api3 lib6api1impl21api3;
        lib6api1impl21api3.doSomething();
        visited = 1;
    }
}

