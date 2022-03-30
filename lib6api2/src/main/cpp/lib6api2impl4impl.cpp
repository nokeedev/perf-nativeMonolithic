// GENERATED SOURCE FILE

#include "lib6api2_private.h"
#include "lib6api2_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api2impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl4impl4(int a, int b) {
    return a + b;
}

int Lib6Api2Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2Impl4Impl" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api2Impl4Core1 lib6api2impl4core1;
        lib6api2impl4core1.doSomething();
        Lib6Api2Impl4Core2 lib6api2impl4core2;
        lib6api2impl4core2.doSomething();
        Lib6Api2Impl5Api1 lib6api2impl5api1;
        lib6api2impl5api1.doSomething();
        Lib6Api2Impl5Api2 lib6api2impl5api2;
        lib6api2impl5api2.doSomething();
        Lib6Api2Impl5Api3 lib6api2impl5api3;
        lib6api2impl5api3.doSomething();
        visited = 1;
    }
}

