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
int lib6api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl34api4(int a, int b) {
    return a + b;
}

int Lib6Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl34Api" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl34Core lib6api3impl34core;
        lib6api3impl34core.doSomething();
        visited = 1;
    }
}

