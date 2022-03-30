// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl19api34(int a, int b) {
    return a + b;
}

int Lib6Core1Impl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl19Api3" << std::endl;
        Lib6Core1Impl19Impl lib6core1impl19impl;
        lib6core1impl19impl.doSomething();
        Lib6Core1Impl20Api1 lib6core1impl20api1;
        lib6core1impl20api1.doSomething();
        Lib6Core1Impl20Api2 lib6core1impl20api2;
        lib6core1impl20api2.doSomething();
        Lib6Core1Impl20Api3 lib6core1impl20api3;
        lib6core1impl20api3.doSomething();
        visited = 1;
    }
}

