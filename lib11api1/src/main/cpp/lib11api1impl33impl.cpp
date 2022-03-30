// GENERATED SOURCE FILE

#include "lib11api1_private.h"
#include "lib11api1_impl.h"
#include "lib12api1.h"
#include "lib11impl.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api1impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl33impl4(int a, int b) {
    return a + b;
}

int Lib11Api1Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl33Impl" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl33Core lib11api1impl33core;
        lib11api1impl33core.doSomething();
        Lib11Api1Impl34Api lib11api1impl34api;
        lib11api1impl34api.doSomething();
        visited = 1;
    }
}

