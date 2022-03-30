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
int lib9api3impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl19api14(int a, int b) {
    return a + b;
}

int Lib9Api3Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api3Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api3Impl19Api1" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api3Impl20Api1 lib9api3impl20api1;
        lib9api3impl20api1.doSomething();
        Lib9Api3Impl19Impl lib9api3impl19impl;
        lib9api3impl19impl.doSomething();
        Lib9Api3Impl20Api2 lib9api3impl20api2;
        lib9api3impl20api2.doSomething();
        Lib9Api3Impl20Api3 lib9api3impl20api3;
        lib9api3impl20api3.doSomething();
        visited = 1;
    }
}

