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
int lib4api3impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl33impl4(int a, int b) {
    return a + b;
}

int Lib4Api3Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl33Impl" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl33Core lib4api3impl33core;
        lib4api3impl33core.doSomething();
        Lib4Api3Impl34Api lib4api3impl34api;
        lib4api3impl34api.doSomething();
        visited = 1;
    }
}

