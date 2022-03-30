// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl26api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl26api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl26api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl26api14(int a, int b) {
    return a + b;
}

int Lib1Core1Impl26Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl26Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl26Api1" << std::endl;
        Lib1Core1Impl27Api1 lib1core1impl27api1;
        lib1core1impl27api1.doSomething();
        Lib1Core1Impl26Impl lib1core1impl26impl;
        lib1core1impl26impl.doSomething();
        Lib1Core1Impl27Api2 lib1core1impl27api2;
        lib1core1impl27api2.doSomething();
        Lib1Core1Impl27Api3 lib1core1impl27api3;
        lib1core1impl27api3.doSomething();
        visited = 1;
    }
}

