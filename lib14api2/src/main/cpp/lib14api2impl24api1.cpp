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
int lib14api2impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl24api14(int a, int b) {
    return a + b;
}

int Lib14Api2Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl24Api1" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl25Api1 lib14api2impl25api1;
        lib14api2impl25api1.doSomething();
        Lib14Api2Impl24Impl lib14api2impl24impl;
        lib14api2impl24impl.doSomething();
        Lib14Api2Impl25Api2 lib14api2impl25api2;
        lib14api2impl25api2.doSomething();
        Lib14Api2Impl25Api3 lib14api2impl25api3;
        lib14api2impl25api3.doSomething();
        visited = 1;
    }
}
