// GENERATED SOURCE FILE

#include "lib10api1_private.h"
#include "lib10api1_impl.h"
#include "lib11api1.h"
#include "lib10impl.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api1impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl33impl4(int a, int b) {
    return a + b;
}

int Lib10Api1Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api1Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api1Impl33Impl" << std::endl;
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api1Impl33Core lib10api1impl33core;
        lib10api1impl33core.doSomething();
        Lib10Api1Impl34Api lib10api1impl34api;
        lib10api1impl34api.doSomething();
        visited = 1;
    }
}

