// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl4api24(int a, int b) {
    return a + b;
}

int Lib10Core2Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl4Api2" << std::endl;
        Lib10Core2Impl4Impl lib10core2impl4impl;
        lib10core2impl4impl.doSomething();
        Lib10Core2Impl5Api1 lib10core2impl5api1;
        lib10core2impl5api1.doSomething();
        Lib10Core2Impl5Api2 lib10core2impl5api2;
        lib10core2impl5api2.doSomething();
        Lib10Core2Impl5Api3 lib10core2impl5api3;
        lib10core2impl5api3.doSomething();
        visited = 1;
    }
}

