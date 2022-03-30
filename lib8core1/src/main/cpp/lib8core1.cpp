// GENERATED SOURCE FILE

#include "lib8core1_impl.h"
#include "lib8core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core14(int a, int b) {
    return a + b;
}

int Lib8Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1" << std::endl;
        Lib8Core1Impl1Api1 lib8core1impl1api1;
        lib8core1impl1api1.doSomething();
        Lib8Core1Impl1Api2 lib8core1impl1api2;
        lib8core1impl1api2.doSomething();
        Lib8Core1Impl1Api3 lib8core1impl1api3;
        lib8core1impl1api3.doSomething();
        visited = 1;
    }
}

