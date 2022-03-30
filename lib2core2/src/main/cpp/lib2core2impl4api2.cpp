// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl4api24(int a, int b) {
    return a + b;
}

int Lib2Core2Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl4Api2" << std::endl;
        Lib2Core2Impl4Impl lib2core2impl4impl;
        lib2core2impl4impl.doSomething();
        Lib2Core2Impl5Api1 lib2core2impl5api1;
        lib2core2impl5api1.doSomething();
        Lib2Core2Impl5Api2 lib2core2impl5api2;
        lib2core2impl5api2.doSomething();
        Lib2Core2Impl5Api3 lib2core2impl5api3;
        lib2core2impl5api3.doSomething();
        visited = 1;
    }
}

