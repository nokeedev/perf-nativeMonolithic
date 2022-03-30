// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl29api34(int a, int b) {
    return a + b;
}

int Lib3Core1Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl29Api3" << std::endl;
        Lib3Core1Impl29Impl lib3core1impl29impl;
        lib3core1impl29impl.doSomething();
        Lib3Core1Impl30Api1 lib3core1impl30api1;
        lib3core1impl30api1.doSomething();
        Lib3Core1Impl30Api2 lib3core1impl30api2;
        lib3core1impl30api2.doSomething();
        Lib3Core1Impl30Api3 lib3core1impl30api3;
        lib3core1impl30api3.doSomething();
        visited = 1;
    }
}

