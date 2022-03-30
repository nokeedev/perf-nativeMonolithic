// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl20api34(int a, int b) {
    return a + b;
}

int Lib16Api2Impl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl20Api3" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl20Impl lib16api2impl20impl;
        lib16api2impl20impl.doSomething();
        Lib16Api2Impl21Api1 lib16api2impl21api1;
        lib16api2impl21api1.doSomething();
        Lib16Api2Impl21Api2 lib16api2impl21api2;
        lib16api2impl21api2.doSomething();
        Lib16Api2Impl21Api3 lib16api2impl21api3;
        lib16api2impl21api3.doSomething();
        visited = 1;
    }
}

