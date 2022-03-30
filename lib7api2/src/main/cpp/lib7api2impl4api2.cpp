// GENERATED SOURCE FILE

#include "lib7api2_private.h"
#include "lib7api2_impl.h"
#include "lib7impl.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api2impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl4api24(int a, int b) {
    return a + b;
}

int Lib7Api2Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl4Api2" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl4Impl lib7api2impl4impl;
        lib7api2impl4impl.doSomething();
        Lib7Api2Impl5Api1 lib7api2impl5api1;
        lib7api2impl5api1.doSomething();
        Lib7Api2Impl5Api2 lib7api2impl5api2;
        lib7api2impl5api2.doSomething();
        Lib7Api2Impl5Api3 lib7api2impl5api3;
        lib7api2impl5api3.doSomething();
        visited = 1;
    }
}

