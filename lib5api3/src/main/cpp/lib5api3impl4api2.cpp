// GENERATED SOURCE FILE

#include "lib5api3_private.h"
#include "lib5api3_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api3impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl4api24(int a, int b) {
    return a + b;
}

int Lib5Api3Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl4Api2" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl4Impl lib5api3impl4impl;
        lib5api3impl4impl.doSomething();
        Lib5Api3Impl5Api1 lib5api3impl5api1;
        lib5api3impl5api1.doSomething();
        Lib5Api3Impl5Api2 lib5api3impl5api2;
        lib5api3impl5api2.doSomething();
        Lib5Api3Impl5Api3 lib5api3impl5api3;
        lib5api3impl5api3.doSomething();
        visited = 1;
    }
}

