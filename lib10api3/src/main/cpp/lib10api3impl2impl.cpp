// GENERATED SOURCE FILE

#include "lib10api3_private.h"
#include "lib10api3_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api3impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl2impl4(int a, int b) {
    return a + b;
}

int Lib10Api3Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3Impl2Impl" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api3Impl2Core1 lib10api3impl2core1;
        lib10api3impl2core1.doSomething();
        Lib10Api3Impl2Core2 lib10api3impl2core2;
        lib10api3impl2core2.doSomething();
        Lib10Api3Impl3Api1 lib10api3impl3api1;
        lib10api3impl3api1.doSomething();
        Lib10Api3Impl3Api2 lib10api3impl3api2;
        lib10api3impl3api2.doSomething();
        Lib10Api3Impl3Api3 lib10api3impl3api3;
        lib10api3impl3api3.doSomething();
        visited = 1;
    }
}

