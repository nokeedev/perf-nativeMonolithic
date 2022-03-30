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
int lib9api2impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl15api24(int a, int b) {
    return a + b;
}

int Lib9Api2Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl15Api2" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl15Impl lib9api2impl15impl;
        lib9api2impl15impl.doSomething();
        Lib9Api2Impl16Api1 lib9api2impl16api1;
        lib9api2impl16api1.doSomething();
        Lib9Api2Impl16Api2 lib9api2impl16api2;
        lib9api2impl16api2.doSomething();
        Lib9Api2Impl16Api3 lib9api2impl16api3;
        lib9api2impl16api3.doSomething();
        visited = 1;
    }
}

