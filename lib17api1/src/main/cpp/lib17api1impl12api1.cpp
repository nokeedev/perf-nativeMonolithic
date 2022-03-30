// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl12api14(int a, int b) {
    return a + b;
}

int Lib17Api1Impl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl12Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl13Api1 lib17api1impl13api1;
        lib17api1impl13api1.doSomething();
        Lib17Api1Impl12Impl lib17api1impl12impl;
        lib17api1impl12impl.doSomething();
        Lib17Api1Impl13Api2 lib17api1impl13api2;
        lib17api1impl13api2.doSomething();
        Lib17Api1Impl13Api3 lib17api1impl13api3;
        lib17api1impl13api3.doSomething();
        visited = 1;
    }
}

