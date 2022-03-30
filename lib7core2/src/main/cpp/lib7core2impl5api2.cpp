// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl5api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl5Api2" << std::endl;
        Lib7Core2Impl5Impl lib7core2impl5impl;
        lib7core2impl5impl.doSomething();
        Lib7Core2Impl6Api1 lib7core2impl6api1;
        lib7core2impl6api1.doSomething();
        Lib7Core2Impl6Api2 lib7core2impl6api2;
        lib7core2impl6api2.doSomething();
        Lib7Core2Impl6Api3 lib7core2impl6api3;
        lib7core2impl6api3.doSomething();
        visited = 1;
    }
}

