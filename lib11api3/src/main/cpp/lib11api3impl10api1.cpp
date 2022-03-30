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
int lib11api3impl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl10api14(int a, int b) {
    return a + b;
}

int Lib11Api3Impl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl10Api1" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl11Api1 lib11api3impl11api1;
        lib11api3impl11api1.doSomething();
        Lib11Api3Impl10Impl lib11api3impl10impl;
        lib11api3impl10impl.doSomething();
        Lib11Api3Impl11Api2 lib11api3impl11api2;
        lib11api3impl11api2.doSomething();
        Lib11Api3Impl11Api3 lib11api3impl11api3;
        lib11api3impl11api3.doSomething();
        visited = 1;
    }
}

