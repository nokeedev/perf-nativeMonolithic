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
int lib7api1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl34api4(int a, int b) {
    return a + b;
}

int Lib7Api1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl34Api" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl34Core lib7api1impl34core;
        lib7api1impl34core.doSomething();
        visited = 1;
    }
}

