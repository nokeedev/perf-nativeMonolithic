// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl21api34(int a, int b) {
    return a + b;
}

int Lib10Core2Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl21Api3" << std::endl;
        Lib10Core2Impl21Impl lib10core2impl21impl;
        lib10core2impl21impl.doSomething();
        Lib10Core2Impl22Api1 lib10core2impl22api1;
        lib10core2impl22api1.doSomething();
        Lib10Core2Impl22Api2 lib10core2impl22api2;
        lib10core2impl22api2.doSomething();
        Lib10Core2Impl22Api3 lib10core2impl22api3;
        lib10core2impl22api3.doSomething();
        visited = 1;
    }
}

