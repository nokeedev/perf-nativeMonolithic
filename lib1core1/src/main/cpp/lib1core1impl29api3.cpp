// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl29api34(int a, int b) {
    return a + b;
}

int Lib1Core1Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl29Api3" << std::endl;
        Lib1Core1Impl29Impl lib1core1impl29impl;
        lib1core1impl29impl.doSomething();
        Lib1Core1Impl30Api1 lib1core1impl30api1;
        lib1core1impl30api1.doSomething();
        Lib1Core1Impl30Api2 lib1core1impl30api2;
        lib1core1impl30api2.doSomething();
        Lib1Core1Impl30Api3 lib1core1impl30api3;
        lib1core1impl30api3.doSomething();
        visited = 1;
    }
}

