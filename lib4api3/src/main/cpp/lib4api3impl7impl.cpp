// GENERATED SOURCE FILE

#include "lib4api3_private.h"
#include "lib4api3_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api3impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl7impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl7Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl7Core1 lib4api3impl7core1;
        lib4api3impl7core1.doSomething();
        Lib4Api3Impl7Core2 lib4api3impl7core2;
        lib4api3impl7core2.doSomething();
        Lib4Api3Impl8Api1 lib4api3impl8api1;
        lib4api3impl8api1.doSomething();
        Lib4Api3Impl8Api2 lib4api3impl8api2;
        lib4api3impl8api2.doSomething();
        Lib4Api3Impl8Api3 lib4api3impl8api3;
        lib4api3impl8api3.doSomething();
        visited = 1;
    }
}

