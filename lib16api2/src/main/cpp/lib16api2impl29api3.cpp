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
int lib16api2impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl29api34(int a, int b) {
    return a + b;
}

int Lib16Api2Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl29Api3" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl29Impl lib16api2impl29impl;
        lib16api2impl29impl.doSomething();
        Lib16Api2Impl30Api1 lib16api2impl30api1;
        lib16api2impl30api1.doSomething();
        Lib16Api2Impl30Api2 lib16api2impl30api2;
        lib16api2impl30api2.doSomething();
        Lib16Api2Impl30Api3 lib16api2impl30api3;
        lib16api2impl30api3.doSomething();
        visited = 1;
    }
}

