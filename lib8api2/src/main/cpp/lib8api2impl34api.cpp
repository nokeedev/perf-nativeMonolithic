// GENERATED SOURCE FILE

#include "lib8api2_private.h"
#include "lib8api2_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl34api4(int a, int b) {
    return a + b;
}

int Lib8Api2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl34Api" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl34Core lib8api2impl34core;
        lib8api2impl34core.doSomething();
        visited = 1;
    }
}

