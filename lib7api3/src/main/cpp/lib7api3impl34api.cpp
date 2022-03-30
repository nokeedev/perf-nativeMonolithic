// GENERATED SOURCE FILE

#include "lib7api3_private.h"
#include "lib7api3_impl.h"
#include "lib7impl.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl34api4(int a, int b) {
    return a + b;
}

int Lib7Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl34Api" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl34Core lib7api3impl34core;
        lib7api3impl34core.doSomething();
        visited = 1;
    }
}

