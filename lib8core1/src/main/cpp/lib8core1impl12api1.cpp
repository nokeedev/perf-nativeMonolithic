// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl12api14(int a, int b) {
    return a + b;
}

int Lib8Core1Impl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl12Api1" << std::endl;
        Lib8Core1Impl13Api1 lib8core1impl13api1;
        lib8core1impl13api1.doSomething();
        Lib8Core1Impl12Impl lib8core1impl12impl;
        lib8core1impl12impl.doSomething();
        Lib8Core1Impl13Api2 lib8core1impl13api2;
        lib8core1impl13api2.doSomething();
        Lib8Core1Impl13Api3 lib8core1impl13api3;
        lib8core1impl13api3.doSomething();
        visited = 1;
    }
}

