// GENERATED SOURCE FILE

#include "lib6core1_impl.h"
#include "lib6core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core14(int a, int b) {
    return a + b;
}

int Lib6Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1" << std::endl;
        Lib6Core1Impl1Api1 lib6core1impl1api1;
        lib6core1impl1api1.doSomething();
        Lib6Core1Impl1Api2 lib6core1impl1api2;
        lib6core1impl1api2.doSomething();
        Lib6Core1Impl1Api3 lib6core1impl1api3;
        lib6core1impl1api3.doSomething();
        visited = 1;
    }
}

