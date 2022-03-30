// GENERATED SOURCE FILE

#include "lib14api2_private.h"
#include "lib14api2_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api2impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl23api24(int a, int b) {
    return a + b;
}

int Lib14Api2Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl23Api2" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl23Impl lib14api2impl23impl;
        lib14api2impl23impl.doSomething();
        Lib14Api2Impl24Api1 lib14api2impl24api1;
        lib14api2impl24api1.doSomething();
        Lib14Api2Impl24Api2 lib14api2impl24api2;
        lib14api2impl24api2.doSomething();
        Lib14Api2Impl24Api3 lib14api2impl24api3;
        lib14api2impl24api3.doSomething();
        visited = 1;
    }
}

