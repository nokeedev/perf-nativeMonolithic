// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl25api14(int a, int b) {
    return a + b;
}

int Lib6Core1Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl25Api1" << std::endl;
        Lib6Core1Impl26Api1 lib6core1impl26api1;
        lib6core1impl26api1.doSomething();
        Lib6Core1Impl25Impl lib6core1impl25impl;
        lib6core1impl25impl.doSomething();
        Lib6Core1Impl26Api2 lib6core1impl26api2;
        lib6core1impl26api2.doSomething();
        Lib6Core1Impl26Api3 lib6core1impl26api3;
        lib6core1impl26api3.doSomething();
        visited = 1;
    }
}

