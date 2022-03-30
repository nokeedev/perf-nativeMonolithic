// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl5api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl5Api2" << std::endl;
        Lib15Core2Impl5Impl lib15core2impl5impl;
        lib15core2impl5impl.doSomething();
        Lib15Core2Impl6Api1 lib15core2impl6api1;
        lib15core2impl6api1.doSomething();
        Lib15Core2Impl6Api2 lib15core2impl6api2;
        lib15core2impl6api2.doSomething();
        Lib15Core2Impl6Api3 lib15core2impl6api3;
        lib15core2impl6api3.doSomething();
        visited = 1;
    }
}

