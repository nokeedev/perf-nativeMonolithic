// GENERATED SOURCE FILE

#include "lib14api1_private.h"
#include "lib14api1_impl.h"
#include "lib15api1.h"
#include "lib14impl.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api1impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl5api24(int a, int b) {
    return a + b;
}

int Lib14Api1Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl5Api2" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl5Impl lib14api1impl5impl;
        lib14api1impl5impl.doSomething();
        Lib14Api1Impl6Api1 lib14api1impl6api1;
        lib14api1impl6api1.doSomething();
        Lib14Api1Impl6Api2 lib14api1impl6api2;
        lib14api1impl6api2.doSomething();
        Lib14Api1Impl6Api3 lib14api1impl6api3;
        lib14api1impl6api3.doSomething();
        visited = 1;
    }
}

