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
int lib11api3impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl7impl4(int a, int b) {
    return a + b;
}

int Lib11Api3Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl7Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl7Core1 lib11api3impl7core1;
        lib11api3impl7core1.doSomething();
        Lib11Api3Impl7Core2 lib11api3impl7core2;
        lib11api3impl7core2.doSomething();
        Lib11Api3Impl8Api1 lib11api3impl8api1;
        lib11api3impl8api1.doSomething();
        Lib11Api3Impl8Api2 lib11api3impl8api2;
        lib11api3impl8api2.doSomething();
        Lib11Api3Impl8Api3 lib11api3impl8api3;
        lib11api3impl8api3.doSomething();
        visited = 1;
    }
}

