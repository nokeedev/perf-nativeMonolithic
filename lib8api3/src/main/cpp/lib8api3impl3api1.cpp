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
int lib8api3impl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl3api14(int a, int b) {
    return a + b;
}

int Lib8Api3Impl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl3Api1" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl4Api1 lib8api3impl4api1;
        lib8api3impl4api1.doSomething();
        Lib8Api3Impl3Impl lib8api3impl3impl;
        lib8api3impl3impl.doSomething();
        Lib8Api3Impl4Api2 lib8api3impl4api2;
        lib8api3impl4api2.doSomething();
        Lib8Api3Impl4Api3 lib8api3impl4api3;
        lib8api3impl4api3.doSomething();
        visited = 1;
    }
}

