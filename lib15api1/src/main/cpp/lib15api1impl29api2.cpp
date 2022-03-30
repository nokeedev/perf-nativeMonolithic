// GENERATED SOURCE FILE

#include "lib15api1_private.h"
#include "lib15api1_impl.h"
#include "lib16api1.h"
#include "lib15impl.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api1impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl29api24(int a, int b) {
    return a + b;
}

int Lib15Api1Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl29Api2" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl29Impl lib15api1impl29impl;
        lib15api1impl29impl.doSomething();
        Lib15Api1Impl30Api1 lib15api1impl30api1;
        lib15api1impl30api1.doSomething();
        Lib15Api1Impl30Api2 lib15api1impl30api2;
        lib15api1impl30api2.doSomething();
        Lib15Api1Impl30Api3 lib15api1impl30api3;
        lib15api1impl30api3.doSomething();
        visited = 1;
    }
}

