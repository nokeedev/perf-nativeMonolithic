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
int lib6api1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl34api4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl34Api" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl34Core lib6api1impl34core;
        lib6api1impl34core.doSomething();
        visited = 1;
    }
}

