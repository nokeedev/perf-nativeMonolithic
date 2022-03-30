// GENERATED SOURCE FILE

#include "lib5api2_private.h"
#include "lib5api2_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api2impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl33impl4(int a, int b) {
    return a + b;
}

int Lib5Api2Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl33Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl33Core lib5api2impl33core;
        lib5api2impl33core.doSomething();
        Lib5Api2Impl34Api lib5api2impl34api;
        lib5api2impl34api.doSomething();
        visited = 1;
    }
}

