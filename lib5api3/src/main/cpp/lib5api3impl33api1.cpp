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
int lib5api3impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl33api14(int a, int b) {
    return a + b;
}

int Lib5Api3Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl33Api1" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl34Api lib5api3impl34api;
        lib5api3impl34api.doSomething();
        Lib5Api3Impl33Impl lib5api3impl33impl;
        lib5api3impl33impl.doSomething();
        visited = 1;
    }
}

