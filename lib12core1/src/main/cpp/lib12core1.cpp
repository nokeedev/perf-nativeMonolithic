// GENERATED SOURCE FILE

#include "lib12core1_impl.h"
#include "lib12core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core14(int a, int b) {
    return a + b;
}

int Lib12Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1" << std::endl;
        Lib12Core1Impl1Api1 lib12core1impl1api1;
        lib12core1impl1api1.doSomething();
        Lib12Core1Impl1Api2 lib12core1impl1api2;
        lib12core1impl1api2.doSomething();
        Lib12Core1Impl1Api3 lib12core1impl1api3;
        lib12core1impl1api3.doSomething();
        visited = 1;
    }
}

