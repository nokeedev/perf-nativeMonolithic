// GENERATED SOURCE FILE

#include "lib9api3_private.h"
#include "lib9api3_impl.h"
#include "lib9impl.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api3impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api3impl7impl4(int a, int b) {
    return a + b;
}

int Lib9Api3Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api3Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api3Impl7Impl" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api3Impl7Core1 lib9api3impl7core1;
        lib9api3impl7core1.doSomething();
        Lib9Api3Impl7Core2 lib9api3impl7core2;
        lib9api3impl7core2.doSomething();
        Lib9Api3Impl8Api1 lib9api3impl8api1;
        lib9api3impl8api1.doSomething();
        Lib9Api3Impl8Api2 lib9api3impl8api2;
        lib9api3impl8api2.doSomething();
        Lib9Api3Impl8Api3 lib9api3impl8api3;
        lib9api3impl8api3.doSomething();
        visited = 1;
    }
}

