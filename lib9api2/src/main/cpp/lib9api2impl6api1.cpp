// GENERATED SOURCE FILE

#include "lib9api2_private.h"
#include "lib9api2_impl.h"
#include "lib9impl.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api2impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl6api14(int a, int b) {
    return a + b;
}

int Lib9Api2Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl6Api1" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl7Api1 lib9api2impl7api1;
        lib9api2impl7api1.doSomething();
        Lib9Api2Impl6Impl lib9api2impl6impl;
        lib9api2impl6impl.doSomething();
        Lib9Api2Impl7Api2 lib9api2impl7api2;
        lib9api2impl7api2.doSomething();
        Lib9Api2Impl7Api3 lib9api2impl7api3;
        lib9api2impl7api3.doSomething();
        visited = 1;
    }
}

