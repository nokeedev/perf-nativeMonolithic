// GENERATED SOURCE FILE

#include "lib10api2_private.h"
#include "lib10api2_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api2impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl33impl4(int a, int b) {
    return a + b;
}

int Lib10Api2Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2Impl33Impl" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api2Impl33Core lib10api2impl33core;
        lib10api2impl33core.doSomething();
        Lib10Api2Impl34Api lib10api2impl34api;
        lib10api2impl34api.doSomething();
        visited = 1;
    }
}

