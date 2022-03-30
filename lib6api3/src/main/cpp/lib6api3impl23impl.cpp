// GENERATED SOURCE FILE

#include "lib6api3_private.h"
#include "lib6api3_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api3impl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl23impl4(int a, int b) {
    return a + b;
}

int Lib6Api3Impl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl23Impl" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl23Core1 lib6api3impl23core1;
        lib6api3impl23core1.doSomething();
        Lib6Api3Impl23Core2 lib6api3impl23core2;
        lib6api3impl23core2.doSomething();
        Lib6Api3Impl24Api1 lib6api3impl24api1;
        lib6api3impl24api1.doSomething();
        Lib6Api3Impl24Api2 lib6api3impl24api2;
        lib6api3impl24api2.doSomething();
        Lib6Api3Impl24Api3 lib6api3impl24api3;
        lib6api3impl24api3.doSomething();
        visited = 1;
    }
}

