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
int lib8api3impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl9api14(int a, int b) {
    return a + b;
}

int Lib8Api3Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl9Api1" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl10Api1 lib8api3impl10api1;
        lib8api3impl10api1.doSomething();
        Lib8Api3Impl9Impl lib8api3impl9impl;
        lib8api3impl9impl.doSomething();
        Lib8Api3Impl10Api2 lib8api3impl10api2;
        lib8api3impl10api2.doSomething();
        Lib8Api3Impl10Api3 lib8api3impl10api3;
        lib8api3impl10api3.doSomething();
        visited = 1;
    }
}

