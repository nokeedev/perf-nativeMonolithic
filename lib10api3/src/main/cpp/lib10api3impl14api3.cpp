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
int lib10api3impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl14api34(int a, int b) {
    return a + b;
}

int Lib10Api3Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3Impl14Api3" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api3Impl14Impl lib10api3impl14impl;
        lib10api3impl14impl.doSomething();
        Lib10Api3Impl15Api1 lib10api3impl15api1;
        lib10api3impl15api1.doSomething();
        Lib10Api3Impl15Api2 lib10api3impl15api2;
        lib10api3impl15api2.doSomething();
        Lib10Api3Impl15Api3 lib10api3impl15api3;
        lib10api3impl15api3.doSomething();
        visited = 1;
    }
}

