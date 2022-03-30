// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl4api14(int a, int b) {
    return a + b;
}

int Lib8Core2Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl4Api1" << std::endl;
        Lib8Core2Impl5Api1 lib8core2impl5api1;
        lib8core2impl5api1.doSomething();
        Lib8Core2Impl4Impl lib8core2impl4impl;
        lib8core2impl4impl.doSomething();
        Lib8Core2Impl5Api2 lib8core2impl5api2;
        lib8core2impl5api2.doSomething();
        Lib8Core2Impl5Api3 lib8core2impl5api3;
        lib8core2impl5api3.doSomething();
        visited = 1;
    }
}

