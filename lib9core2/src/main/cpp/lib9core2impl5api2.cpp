// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl5api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl5Api2" << std::endl;
        Lib9Core2Impl5Impl lib9core2impl5impl;
        lib9core2impl5impl.doSomething();
        Lib9Core2Impl6Api1 lib9core2impl6api1;
        lib9core2impl6api1.doSomething();
        Lib9Core2Impl6Api2 lib9core2impl6api2;
        lib9core2impl6api2.doSomething();
        Lib9Core2Impl6Api3 lib9core2impl6api3;
        lib9core2impl6api3.doSomething();
        visited = 1;
    }
}

