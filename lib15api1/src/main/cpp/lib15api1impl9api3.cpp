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
int lib15api1impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl9api34(int a, int b) {
    return a + b;
}

int Lib15Api1Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl9Api3" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl9Impl lib15api1impl9impl;
        lib15api1impl9impl.doSomething();
        Lib15Api1Impl10Api1 lib15api1impl10api1;
        lib15api1impl10api1.doSomething();
        Lib15Api1Impl10Api2 lib15api1impl10api2;
        lib15api1impl10api2.doSomething();
        Lib15Api1Impl10Api3 lib15api1impl10api3;
        lib15api1impl10api3.doSomething();
        visited = 1;
    }
}

