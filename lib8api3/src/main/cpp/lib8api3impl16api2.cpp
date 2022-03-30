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
int lib8api3impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl16api24(int a, int b) {
    return a + b;
}

int Lib8Api3Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl16Api2" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl16Impl lib8api3impl16impl;
        lib8api3impl16impl.doSomething();
        Lib8Api3Impl17Api1 lib8api3impl17api1;
        lib8api3impl17api1.doSomething();
        Lib8Api3Impl17Api2 lib8api3impl17api2;
        lib8api3impl17api2.doSomething();
        Lib8Api3Impl17Api3 lib8api3impl17api3;
        lib8api3impl17api3.doSomething();
        visited = 1;
    }
}

