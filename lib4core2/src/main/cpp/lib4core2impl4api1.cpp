// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl4api14(int a, int b) {
    return a + b;
}

int Lib4Core2Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl4Api1" << std::endl;
        Lib4Core2Impl5Api1 lib4core2impl5api1;
        lib4core2impl5api1.doSomething();
        Lib4Core2Impl4Impl lib4core2impl4impl;
        lib4core2impl4impl.doSomething();
        Lib4Core2Impl5Api2 lib4core2impl5api2;
        lib4core2impl5api2.doSomething();
        Lib4Core2Impl5Api3 lib4core2impl5api3;
        lib4core2impl5api3.doSomething();
        visited = 1;
    }
}

