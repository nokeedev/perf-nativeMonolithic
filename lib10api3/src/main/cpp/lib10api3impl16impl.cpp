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
int lib10api3impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl16impl4(int a, int b) {
    return a + b;
}

int Lib10Api3Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3Impl16Impl" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api3Impl16Core1 lib10api3impl16core1;
        lib10api3impl16core1.doSomething();
        Lib10Api3Impl16Core2 lib10api3impl16core2;
        lib10api3impl16core2.doSomething();
        Lib10Api3Impl17Api1 lib10api3impl17api1;
        lib10api3impl17api1.doSomething();
        Lib10Api3Impl17Api2 lib10api3impl17api2;
        lib10api3impl17api2.doSomething();
        Lib10Api3Impl17Api3 lib10api3impl17api3;
        lib10api3impl17api3.doSomething();
        visited = 1;
    }
}

