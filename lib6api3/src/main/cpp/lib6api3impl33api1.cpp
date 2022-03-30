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
int lib6api3impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl33api14(int a, int b) {
    return a + b;
}

int Lib6Api3Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl33Api1" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl34Api lib6api3impl34api;
        lib6api3impl34api.doSomething();
        Lib6Api3Impl33Impl lib6api3impl33impl;
        lib6api3impl33impl.doSomething();
        visited = 1;
    }
}

