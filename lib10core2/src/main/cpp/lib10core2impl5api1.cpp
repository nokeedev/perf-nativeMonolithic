// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl5api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl5Api1" << std::endl;
        Lib10Core2Impl6Api1 lib10core2impl6api1;
        lib10core2impl6api1.doSomething();
        Lib10Core2Impl5Impl lib10core2impl5impl;
        lib10core2impl5impl.doSomething();
        Lib10Core2Impl6Api2 lib10core2impl6api2;
        lib10core2impl6api2.doSomething();
        Lib10Core2Impl6Api3 lib10core2impl6api3;
        lib10core2impl6api3.doSomething();
        visited = 1;
    }
}

