// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl5api34(int a, int b) {
    return a + b;
}

int Lib2Core2Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl5Api3" << std::endl;
        Lib2Core2Impl5Impl lib2core2impl5impl;
        lib2core2impl5impl.doSomething();
        Lib2Core2Impl6Api1 lib2core2impl6api1;
        lib2core2impl6api1.doSomething();
        Lib2Core2Impl6Api2 lib2core2impl6api2;
        lib2core2impl6api2.doSomething();
        Lib2Core2Impl6Api3 lib2core2impl6api3;
        lib2core2impl6api3.doSomething();
        visited = 1;
    }
}

