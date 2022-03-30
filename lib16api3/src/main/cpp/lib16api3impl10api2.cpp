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
int lib16api3impl10api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl10api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl10api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl10api24(int a, int b) {
    return a + b;
}

int Lib16Api3Impl10Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl10Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl10Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl10Impl lib16api3impl10impl;
        lib16api3impl10impl.doSomething();
        Lib16Api3Impl11Api1 lib16api3impl11api1;
        lib16api3impl11api1.doSomething();
        Lib16Api3Impl11Api2 lib16api3impl11api2;
        lib16api3impl11api2.doSomething();
        Lib16Api3Impl11Api3 lib16api3impl11api3;
        lib16api3impl11api3.doSomething();
        visited = 1;
    }
}

