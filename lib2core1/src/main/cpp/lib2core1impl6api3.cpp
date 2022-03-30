// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl6api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl6api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl6api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl6api34(int a, int b) {
    return a + b;
}

int Lib2Core1Impl6Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl6Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl6Api3" << std::endl;
        Lib2Core1Impl6Impl lib2core1impl6impl;
        lib2core1impl6impl.doSomething();
        Lib2Core1Impl7Api1 lib2core1impl7api1;
        lib2core1impl7api1.doSomething();
        Lib2Core1Impl7Api2 lib2core1impl7api2;
        lib2core1impl7api2.doSomething();
        Lib2Core1Impl7Api3 lib2core1impl7api3;
        lib2core1impl7api3.doSomething();
        visited = 1;
    }
}

