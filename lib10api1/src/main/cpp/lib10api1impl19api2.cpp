// GENERATED SOURCE FILE

#include "lib10api1_private.h"
#include "lib10api1_impl.h"
#include "lib11api1.h"
#include "lib10impl.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api1impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl19api24(int a, int b) {
    return a + b;
}

int Lib10Api1Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api1Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api1Impl19Api2" << std::endl;
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api1Impl19Impl lib10api1impl19impl;
        lib10api1impl19impl.doSomething();
        Lib10Api1Impl20Api1 lib10api1impl20api1;
        lib10api1impl20api1.doSomething();
        Lib10Api1Impl20Api2 lib10api1impl20api2;
        lib10api1impl20api2.doSomething();
        Lib10Api1Impl20Api3 lib10api1impl20api3;
        lib10api1impl20api3.doSomething();
        visited = 1;
    }
}

