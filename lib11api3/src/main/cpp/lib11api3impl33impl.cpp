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
int lib11api3impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl33impl4(int a, int b) {
    return a + b;
}

int Lib11Api3Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl33Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api3Impl33Core lib11api3impl33core;
        lib11api3impl33core.doSomething();
        Lib11Api3Impl34Api lib11api3impl34api;
        lib11api3impl34api.doSomething();
        visited = 1;
    }
}

