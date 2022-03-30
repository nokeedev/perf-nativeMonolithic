// GENERATED SOURCE FILE

#include "lib2core1_impl.h"
#include "lib2core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core14(int a, int b) {
    return a + b;
}

int Lib2Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1" << std::endl;
        Lib2Core1Impl1Api1 lib2core1impl1api1;
        lib2core1impl1api1.doSomething();
        Lib2Core1Impl1Api2 lib2core1impl1api2;
        lib2core1impl1api2.doSomething();
        Lib2Core1Impl1Api3 lib2core1impl1api3;
        lib2core1impl1api3.doSomething();
        visited = 1;
    }
}

