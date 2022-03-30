// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl5api34(int a, int b) {
    return a + b;
}

int Lib12Core2Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl5Api3" << std::endl;
        Lib12Core2Impl5Impl lib12core2impl5impl;
        lib12core2impl5impl.doSomething();
        Lib12Core2Impl6Api1 lib12core2impl6api1;
        lib12core2impl6api1.doSomething();
        Lib12Core2Impl6Api2 lib12core2impl6api2;
        lib12core2impl6api2.doSomething();
        Lib12Core2Impl6Api3 lib12core2impl6api3;
        lib12core2impl6api3.doSomething();
        visited = 1;
    }
}

