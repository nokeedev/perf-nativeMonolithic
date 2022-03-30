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
int lib11api3impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl9api14(int a, int b) {
    return a + b;
}

int Lib11Api3Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl9Api1" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl10Api1 lib11api3impl10api1;
        lib11api3impl10api1.doSomething();
        Lib11Api3Impl9Impl lib11api3impl9impl;
        lib11api3impl9impl.doSomething();
        Lib11Api3Impl10Api2 lib11api3impl10api2;
        lib11api3impl10api2.doSomething();
        Lib11Api3Impl10Api3 lib11api3impl10api3;
        lib11api3impl10api3.doSomething();
        visited = 1;
    }
}

