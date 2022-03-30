// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl25api34(int a, int b) {
    return a + b;
}

int Lib2Core1Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl25Api3" << std::endl;
        Lib2Core1Impl25Impl lib2core1impl25impl;
        lib2core1impl25impl.doSomething();
        Lib2Core1Impl26Api1 lib2core1impl26api1;
        lib2core1impl26api1.doSomething();
        Lib2Core1Impl26Api2 lib2core1impl26api2;
        lib2core1impl26api2.doSomething();
        Lib2Core1Impl26Api3 lib2core1impl26api3;
        lib2core1impl26api3.doSomething();
        visited = 1;
    }
}

