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
int lib10api3impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl33api14(int a, int b) {
    return a + b;
}

int Lib10Api3Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3Impl33Api1" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api3Impl34Api lib10api3impl34api;
        lib10api3impl34api.doSomething();
        Lib10Api3Impl33Impl lib10api3impl33impl;
        lib10api3impl33impl.doSomething();
        visited = 1;
    }
}

