// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl26api34(int a, int b) {
    return a + b;
}

int Lib9Core1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl26Api3" << std::endl;
        Lib9Core1Impl26Impl lib9core1impl26impl;
        lib9core1impl26impl.doSomething();
        Lib9Core1Impl27Api1 lib9core1impl27api1;
        lib9core1impl27api1.doSomething();
        Lib9Core1Impl27Api2 lib9core1impl27api2;
        lib9core1impl27api2.doSomething();
        Lib9Core1Impl27Api3 lib9core1impl27api3;
        lib9core1impl27api3.doSomething();
        visited = 1;
    }
}

