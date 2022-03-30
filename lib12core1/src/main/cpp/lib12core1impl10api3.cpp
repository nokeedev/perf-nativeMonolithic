// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl10api34(int a, int b) {
    return a + b;
}

int Lib12Core1Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl10Api3" << std::endl;
        Lib12Core1Impl10Impl lib12core1impl10impl;
        lib12core1impl10impl.doSomething();
        Lib12Core1Impl11Api1 lib12core1impl11api1;
        lib12core1impl11api1.doSomething();
        Lib12Core1Impl11Api2 lib12core1impl11api2;
        lib12core1impl11api2.doSomething();
        Lib12Core1Impl11Api3 lib12core1impl11api3;
        lib12core1impl11api3.doSomething();
        visited = 1;
    }
}

