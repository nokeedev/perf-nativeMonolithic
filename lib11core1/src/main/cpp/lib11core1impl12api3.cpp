// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl12api34(int a, int b) {
    return a + b;
}

int Lib11Core1Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl12Api3" << std::endl;
        Lib11Core1Impl12Impl lib11core1impl12impl;
        lib11core1impl12impl.doSomething();
        Lib11Core1Impl13Api1 lib11core1impl13api1;
        lib11core1impl13api1.doSomething();
        Lib11Core1Impl13Api2 lib11core1impl13api2;
        lib11core1impl13api2.doSomething();
        Lib11Core1Impl13Api3 lib11core1impl13api3;
        lib11core1impl13api3.doSomething();
        visited = 1;
    }
}

