// GENERATED SOURCE FILE

#include "lib16api1_private.h"
#include "lib16api1_impl.h"
#include "lib17api1.h"
#include "lib16impl.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api1impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl29api34(int a, int b) {
    return a + b;
}

int Lib16Api1Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl29Api3" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl29Impl lib16api1impl29impl;
        lib16api1impl29impl.doSomething();
        Lib16Api1Impl30Api1 lib16api1impl30api1;
        lib16api1impl30api1.doSomething();
        Lib16Api1Impl30Api2 lib16api1impl30api2;
        lib16api1impl30api2.doSomething();
        Lib16Api1Impl30Api3 lib16api1impl30api3;
        lib16api1impl30api3.doSomething();
        visited = 1;
    }
}

