// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl21api14(int a, int b) {
    return a + b;
}

int Lib17Api2Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl21Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl22Api1 lib17api2impl22api1;
        lib17api2impl22api1.doSomething();
        Lib17Api2Impl21Impl lib17api2impl21impl;
        lib17api2impl21impl.doSomething();
        Lib17Api2Impl22Api2 lib17api2impl22api2;
        lib17api2impl22api2.doSomething();
        Lib17Api2Impl22Api3 lib17api2impl22api3;
        lib17api2impl22api3.doSomething();
        visited = 1;
    }
}

