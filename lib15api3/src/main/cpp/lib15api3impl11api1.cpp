// GENERATED SOURCE FILE

#include "lib15api3_private.h"
#include "lib15api3_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api3impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl11api14(int a, int b) {
    return a + b;
}

int Lib15Api3Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl11Api1" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl12Api1 lib15api3impl12api1;
        lib15api3impl12api1.doSomething();
        Lib15Api3Impl11Impl lib15api3impl11impl;
        lib15api3impl11impl.doSomething();
        Lib15Api3Impl12Api2 lib15api3impl12api2;
        lib15api3impl12api2.doSomething();
        Lib15Api3Impl12Api3 lib15api3impl12api3;
        lib15api3impl12api3.doSomething();
        visited = 1;
    }
}

