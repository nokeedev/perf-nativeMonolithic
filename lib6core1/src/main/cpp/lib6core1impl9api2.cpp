// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl9api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl9api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl9api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl9api24(int a, int b) {
    return a + b;
}

int Lib6Core1Impl9Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl9Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl9Api2" << std::endl;
        Lib6Core1Impl9Impl lib6core1impl9impl;
        lib6core1impl9impl.doSomething();
        Lib6Core1Impl10Api1 lib6core1impl10api1;
        lib6core1impl10api1.doSomething();
        Lib6Core1Impl10Api2 lib6core1impl10api2;
        lib6core1impl10api2.doSomething();
        Lib6Core1Impl10Api3 lib6core1impl10api3;
        lib6core1impl10api3.doSomething();
        visited = 1;
    }
}

