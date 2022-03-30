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
int lib14api3impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl27api24(int a, int b) {
    return a + b;
}

int Lib14Api3Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl27Api2" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl27Impl lib14api3impl27impl;
        lib14api3impl27impl.doSomething();
        Lib14Api3Impl28Api1 lib14api3impl28api1;
        lib14api3impl28api1.doSomething();
        Lib14Api3Impl28Api2 lib14api3impl28api2;
        lib14api3impl28api2.doSomething();
        Lib14Api3Impl28Api3 lib14api3impl28api3;
        lib14api3impl28api3.doSomething();
        visited = 1;
    }
}

