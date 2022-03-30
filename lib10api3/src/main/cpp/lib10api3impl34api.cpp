// GENERATED SOURCE FILE

#include "lib10api3_private.h"
#include "lib10api3_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl34api4(int a, int b) {
    return a + b;
}

int Lib10Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3Impl34Api" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api3Impl34Core lib10api3impl34core;
        lib10api3impl34core.doSomething();
        visited = 1;
    }
}

