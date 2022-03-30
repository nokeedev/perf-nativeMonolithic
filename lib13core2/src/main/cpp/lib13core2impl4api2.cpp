// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl4api24(int a, int b) {
    return a + b;
}

int Lib13Core2Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl4Api2" << std::endl;
        Lib13Core2Impl4Impl lib13core2impl4impl;
        lib13core2impl4impl.doSomething();
        Lib13Core2Impl5Api1 lib13core2impl5api1;
        lib13core2impl5api1.doSomething();
        Lib13Core2Impl5Api2 lib13core2impl5api2;
        lib13core2impl5api2.doSomething();
        Lib13Core2Impl5Api3 lib13core2impl5api3;
        lib13core2impl5api3.doSomething();
        visited = 1;
    }
}

