// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl12api24(int a, int b) {
    return a + b;
}

int Lib2Core1Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl12Api2" << std::endl;
        Lib2Core1Impl12Impl lib2core1impl12impl;
        lib2core1impl12impl.doSomething();
        Lib2Core1Impl13Api1 lib2core1impl13api1;
        lib2core1impl13api1.doSomething();
        Lib2Core1Impl13Api2 lib2core1impl13api2;
        lib2core1impl13api2.doSomething();
        Lib2Core1Impl13Api3 lib2core1impl13api3;
        lib2core1impl13api3.doSomething();
        visited = 1;
    }
}

