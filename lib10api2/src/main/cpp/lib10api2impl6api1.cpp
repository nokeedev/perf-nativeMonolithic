// GENERATED SOURCE FILE

#include "lib10api2_private.h"
#include "lib10api2_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api2impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl6api14(int a, int b) {
    return a + b;
}

int Lib10Api2Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2Impl6Api1" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api2Impl7Api1 lib10api2impl7api1;
        lib10api2impl7api1.doSomething();
        Lib10Api2Impl6Impl lib10api2impl6impl;
        lib10api2impl6impl.doSomething();
        Lib10Api2Impl7Api2 lib10api2impl7api2;
        lib10api2impl7api2.doSomething();
        Lib10Api2Impl7Api3 lib10api2impl7api3;
        lib10api2impl7api3.doSomething();
        visited = 1;
    }
}

