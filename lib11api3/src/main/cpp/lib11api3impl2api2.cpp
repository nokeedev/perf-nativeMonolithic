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
int lib11api3impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl2api24(int a, int b) {
    return a + b;
}

int Lib11Api3Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl2Api2" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl2Impl lib11api3impl2impl;
        lib11api3impl2impl.doSomething();
        Lib11Api3Impl3Api1 lib11api3impl3api1;
        lib11api3impl3api1.doSomething();
        Lib11Api3Impl3Api2 lib11api3impl3api2;
        lib11api3impl3api2.doSomething();
        Lib11Api3Impl3Api3 lib11api3impl3api3;
        lib11api3impl3api3.doSomething();
        visited = 1;
    }
}

