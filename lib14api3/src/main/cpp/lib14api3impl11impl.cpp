// GENERATED SOURCE FILE

#include "lib14api3_private.h"
#include "lib14api3_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api3impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl11impl4(int a, int b) {
    return a + b;
}

int Lib14Api3Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl11Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl11Core1 lib14api3impl11core1;
        lib14api3impl11core1.doSomething();
        Lib14Api3Impl11Core2 lib14api3impl11core2;
        lib14api3impl11core2.doSomething();
        Lib14Api3Impl12Api1 lib14api3impl12api1;
        lib14api3impl12api1.doSomething();
        Lib14Api3Impl12Api2 lib14api3impl12api2;
        lib14api3impl12api2.doSomething();
        Lib14Api3Impl12Api3 lib14api3impl12api3;
        lib14api3impl12api3.doSomething();
        visited = 1;
    }
}

