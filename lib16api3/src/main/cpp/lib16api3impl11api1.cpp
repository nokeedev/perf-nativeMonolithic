// GENERATED SOURCE FILE

#include "lib16api3_private.h"
#include "lib16api3_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api3impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl11api14(int a, int b) {
    return a + b;
}

int Lib16Api3Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl11Api1" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl12Api1 lib16api3impl12api1;
        lib16api3impl12api1.doSomething();
        Lib16Api3Impl11Impl lib16api3impl11impl;
        lib16api3impl11impl.doSomething();
        Lib16Api3Impl12Api2 lib16api3impl12api2;
        lib16api3impl12api2.doSomething();
        Lib16Api3Impl12Api3 lib16api3impl12api3;
        lib16api3impl12api3.doSomething();
        visited = 1;
    }
}

