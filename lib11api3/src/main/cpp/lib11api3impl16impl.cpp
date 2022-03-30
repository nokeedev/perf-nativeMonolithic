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
int lib11api3impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl16impl4(int a, int b) {
    return a + b;
}

int Lib11Api3Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl16Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl16Core1 lib11api3impl16core1;
        lib11api3impl16core1.doSomething();
        Lib11Api3Impl16Core2 lib11api3impl16core2;
        lib11api3impl16core2.doSomething();
        Lib11Api3Impl17Api1 lib11api3impl17api1;
        lib11api3impl17api1.doSomething();
        Lib11Api3Impl17Api2 lib11api3impl17api2;
        lib11api3impl17api2.doSomething();
        Lib11Api3Impl17Api3 lib11api3impl17api3;
        lib11api3impl17api3.doSomething();
        visited = 1;
    }
}

