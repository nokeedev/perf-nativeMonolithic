// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl27api14(int a, int b) {
    return a + b;
}

int Lib1Core1Impl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl27Api1" << std::endl;
        Lib1Core1Impl28Api1 lib1core1impl28api1;
        lib1core1impl28api1.doSomething();
        Lib1Core1Impl27Impl lib1core1impl27impl;
        lib1core1impl27impl.doSomething();
        Lib1Core1Impl28Api2 lib1core1impl28api2;
        lib1core1impl28api2.doSomething();
        Lib1Core1Impl28Api3 lib1core1impl28api3;
        lib1core1impl28api3.doSomething();
        visited = 1;
    }
}

