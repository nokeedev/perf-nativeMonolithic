// GENERATED SOURCE FILE

#include "lib11api3_private.h"
#include "lib11api3_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api3impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl30api24(int a, int b) {
    return a + b;
}

int Lib11Api3Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl30Api2" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl30Impl lib11api3impl30impl;
        lib11api3impl30impl.doSomething();
        Lib11Api3Impl31Api1 lib11api3impl31api1;
        lib11api3impl31api1.doSomething();
        Lib11Api3Impl31Api2 lib11api3impl31api2;
        lib11api3impl31api2.doSomething();
        Lib11Api3Impl31Api3 lib11api3impl31api3;
        lib11api3impl31api3.doSomething();
        visited = 1;
    }
}

