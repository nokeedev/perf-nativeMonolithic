// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl27api34(int a, int b) {
    return a + b;
}

int Lib7Core1Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl27Api3" << std::endl;
        Lib7Core1Impl27Impl lib7core1impl27impl;
        lib7core1impl27impl.doSomething();
        Lib7Core1Impl28Api1 lib7core1impl28api1;
        lib7core1impl28api1.doSomething();
        Lib7Core1Impl28Api2 lib7core1impl28api2;
        lib7core1impl28api2.doSomething();
        Lib7Core1Impl28Api3 lib7core1impl28api3;
        lib7core1impl28api3.doSomething();
        visited = 1;
    }
}

