// GENERATED SOURCE FILE

#include "lib14api3_private.h"
#include "lib14api3_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api3impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl21api34(int a, int b) {
    return a + b;
}

int Lib14Api3Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl21Api3" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl21Impl lib14api3impl21impl;
        lib14api3impl21impl.doSomething();
        Lib14Api3Impl22Api1 lib14api3impl22api1;
        lib14api3impl22api1.doSomething();
        Lib14Api3Impl22Api2 lib14api3impl22api2;
        lib14api3impl22api2.doSomething();
        Lib14Api3Impl22Api3 lib14api3impl22api3;
        lib14api3impl22api3.doSomething();
        visited = 1;
    }
}

