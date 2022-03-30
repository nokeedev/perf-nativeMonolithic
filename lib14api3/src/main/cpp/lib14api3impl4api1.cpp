// GENERATED SOURCE FILE

#include "lib14api3_private.h"
#include "lib14api3_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api3impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl4api14(int a, int b) {
    return a + b;
}

int Lib14Api3Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl4Api1" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl5Api1 lib14api3impl5api1;
        lib14api3impl5api1.doSomething();
        Lib14Api3Impl4Impl lib14api3impl4impl;
        lib14api3impl4impl.doSomething();
        Lib14Api3Impl5Api2 lib14api3impl5api2;
        lib14api3impl5api2.doSomething();
        Lib14Api3Impl5Api3 lib14api3impl5api3;
        lib14api3impl5api3.doSomething();
        visited = 1;
    }
}

