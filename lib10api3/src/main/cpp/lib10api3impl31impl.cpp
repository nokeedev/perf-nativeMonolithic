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
int lib10api3impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl31impl4(int a, int b) {
    return a + b;
}

int Lib10Api3Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3Impl31Impl" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api3Impl31Core1 lib10api3impl31core1;
        lib10api3impl31core1.doSomething();
        Lib10Api3Impl31Core2 lib10api3impl31core2;
        lib10api3impl31core2.doSomething();
        Lib10Api3Impl32Api1 lib10api3impl32api1;
        lib10api3impl32api1.doSomething();
        Lib10Api3Impl32Api2 lib10api3impl32api2;
        lib10api3impl32api2.doSomething();
        Lib10Api3Impl32Api3 lib10api3impl32api3;
        lib10api3impl32api3.doSomething();
        visited = 1;
    }
}

