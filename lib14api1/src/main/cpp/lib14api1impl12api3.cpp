// GENERATED SOURCE FILE

#include "lib14api1_private.h"
#include "lib14api1_impl.h"
#include "lib15api1.h"
#include "lib14impl.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api1impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl12api34(int a, int b) {
    return a + b;
}

int Lib14Api1Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl12Api3" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl12Impl lib14api1impl12impl;
        lib14api1impl12impl.doSomething();
        Lib14Api1Impl13Api1 lib14api1impl13api1;
        lib14api1impl13api1.doSomething();
        Lib14Api1Impl13Api2 lib14api1impl13api2;
        lib14api1impl13api2.doSomething();
        Lib14Api1Impl13Api3 lib14api1impl13api3;
        lib14api1impl13api3.doSomething();
        visited = 1;
    }
}

