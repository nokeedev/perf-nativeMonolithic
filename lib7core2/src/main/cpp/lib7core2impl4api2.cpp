// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl4api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl4Api2" << std::endl;
        Lib7Core2Impl4Impl lib7core2impl4impl;
        lib7core2impl4impl.doSomething();
        Lib7Core2Impl5Api1 lib7core2impl5api1;
        lib7core2impl5api1.doSomething();
        Lib7Core2Impl5Api2 lib7core2impl5api2;
        lib7core2impl5api2.doSomething();
        Lib7Core2Impl5Api3 lib7core2impl5api3;
        lib7core2impl5api3.doSomething();
        visited = 1;
    }
}

