// GENERATED SOURCE FILE

#include "lib11api2_private.h"
#include "lib11api2_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api2impl30api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl30api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl30api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl30api14(int a, int b) {
    return a + b;
}

int Lib11Api2Impl30Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl30Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl30Api1" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl31Api1 lib11api2impl31api1;
        lib11api2impl31api1.doSomething();
        Lib11Api2Impl30Impl lib11api2impl30impl;
        lib11api2impl30impl.doSomething();
        Lib11Api2Impl31Api2 lib11api2impl31api2;
        lib11api2impl31api2.doSomething();
        Lib11Api2Impl31Api3 lib11api2impl31api3;
        lib11api2impl31api3.doSomething();
        visited = 1;
    }
}
