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
int lib15api3impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl9impl4(int a, int b) {
    return a + b;
}

int Lib15Api3Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl9Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl9Core1 lib15api3impl9core1;
        lib15api3impl9core1.doSomething();
        Lib15Api3Impl9Core2 lib15api3impl9core2;
        lib15api3impl9core2.doSomething();
        Lib15Api3Impl10Api1 lib15api3impl10api1;
        lib15api3impl10api1.doSomething();
        Lib15Api3Impl10Api2 lib15api3impl10api2;
        lib15api3impl10api2.doSomething();
        Lib15Api3Impl10Api3 lib15api3impl10api3;
        lib15api3impl10api3.doSomething();
        visited = 1;
    }
}

