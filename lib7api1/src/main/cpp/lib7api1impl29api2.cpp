// GENERATED SOURCE FILE

#include "lib7api1_private.h"
#include "lib7api1_impl.h"
#include "lib8api1.h"
#include "lib7impl.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api1impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl29api24(int a, int b) {
    return a + b;
}

int Lib7Api1Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl29Api2" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl29Impl lib7api1impl29impl;
        lib7api1impl29impl.doSomething();
        Lib7Api1Impl30Api1 lib7api1impl30api1;
        lib7api1impl30api1.doSomething();
        Lib7Api1Impl30Api2 lib7api1impl30api2;
        lib7api1impl30api2.doSomething();
        Lib7Api1Impl30Api3 lib7api1impl30api3;
        lib7api1impl30api3.doSomething();
        visited = 1;
    }
}

