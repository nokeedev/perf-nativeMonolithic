// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl27api34(int a, int b) {
    return a + b;
}

int Lib6Core1Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl27Api3" << std::endl;
        Lib6Core1Impl27Impl lib6core1impl27impl;
        lib6core1impl27impl.doSomething();
        Lib6Core1Impl28Api1 lib6core1impl28api1;
        lib6core1impl28api1.doSomething();
        Lib6Core1Impl28Api2 lib6core1impl28api2;
        lib6core1impl28api2.doSomething();
        Lib6Core1Impl28Api3 lib6core1impl28api3;
        lib6core1impl28api3.doSomething();
        visited = 1;
    }
}

