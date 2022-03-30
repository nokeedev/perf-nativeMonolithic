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
int lib11api3impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl20impl4(int a, int b) {
    return a + b;
}

int Lib11Api3Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl20Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl20Core1 lib11api3impl20core1;
        lib11api3impl20core1.doSomething();
        Lib11Api3Impl20Core2 lib11api3impl20core2;
        lib11api3impl20core2.doSomething();
        Lib11Api3Impl21Api1 lib11api3impl21api1;
        lib11api3impl21api1.doSomething();
        Lib11Api3Impl21Api2 lib11api3impl21api2;
        lib11api3impl21api2.doSomething();
        Lib11Api3Impl21Api3 lib11api3impl21api3;
        lib11api3impl21api3.doSomething();
        visited = 1;
    }
}

