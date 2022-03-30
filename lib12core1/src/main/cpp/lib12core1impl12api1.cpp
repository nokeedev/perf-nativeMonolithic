// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl12api14(int a, int b) {
    return a + b;
}

int Lib12Core1Impl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl12Api1" << std::endl;
        Lib12Core1Impl13Api1 lib12core1impl13api1;
        lib12core1impl13api1.doSomething();
        Lib12Core1Impl12Impl lib12core1impl12impl;
        lib12core1impl12impl.doSomething();
        Lib12Core1Impl13Api2 lib12core1impl13api2;
        lib12core1impl13api2.doSomething();
        Lib12Core1Impl13Api3 lib12core1impl13api3;
        lib12core1impl13api3.doSomething();
        visited = 1;
    }
}

