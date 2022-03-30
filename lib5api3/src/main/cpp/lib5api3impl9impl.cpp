// GENERATED SOURCE FILE

#include "lib5api3_private.h"
#include "lib5api3_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api3impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api3impl9impl4(int a, int b) {
    return a + b;
}

int Lib5Api3Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api3Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api3Impl9Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api3Impl9Core1 lib5api3impl9core1;
        lib5api3impl9core1.doSomething();
        Lib5Api3Impl9Core2 lib5api3impl9core2;
        lib5api3impl9core2.doSomething();
        Lib5Api3Impl10Api1 lib5api3impl10api1;
        lib5api3impl10api1.doSomething();
        Lib5Api3Impl10Api2 lib5api3impl10api2;
        lib5api3impl10api2.doSomething();
        Lib5Api3Impl10Api3 lib5api3impl10api3;
        lib5api3impl10api3.doSomething();
        visited = 1;
    }
}

