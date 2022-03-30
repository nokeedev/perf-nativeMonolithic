// GENERATED SOURCE FILE

#include "lib9api3_private.h"
#include "lib9api3_impl.h"
#include "lib9impl.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api3impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl32api14(int a, int b) {
    return a + b;
}

int Lib9Api3Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api3Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api3Impl32Api1" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api3Impl33Api1 lib9api3impl33api1;
        lib9api3impl33api1.doSomething();
        Lib9Api3Impl32Impl lib9api3impl32impl;
        lib9api3impl32impl.doSomething();
        Lib9Api3Impl33Api2 lib9api3impl33api2;
        lib9api3impl33api2.doSomething();
        Lib9Api3Impl33Api3 lib9api3impl33api3;
        lib9api3impl33api3.doSomething();
        visited = 1;
    }
}

