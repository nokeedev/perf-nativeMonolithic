// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl12api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl12Api2" << std::endl;
        Lib12Core1Impl12Impl lib12core1impl12impl;
        lib12core1impl12impl.doSomething();
        Lib12Core1Impl13Api1 lib12core1impl13api1;
        lib12core1impl13api1.doSomething();
        Lib12Core1Impl13Api2 lib12core1impl13api2;
        lib12core1impl13api2.doSomething();
        Lib12Core1Impl13Api3 lib12core1impl13api3;
        lib12core1impl13api3.doSomething();
        visited = 1;
    }
}

