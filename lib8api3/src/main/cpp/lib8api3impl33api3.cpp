// GENERATED SOURCE FILE

#include "lib8api3_private.h"
#include "lib8api3_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api3impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl33api34(int a, int b) {
    return a + b;
}

int Lib8Api3Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl33Api3" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl33Impl lib8api3impl33impl;
        lib8api3impl33impl.doSomething();
        Lib8Api3Impl34Api lib8api3impl34api;
        lib8api3impl34api.doSomething();
        visited = 1;
    }
}

