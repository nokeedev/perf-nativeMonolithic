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
int lib5api2impl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl23impl4(int a, int b) {
    return a + b;
}

int Lib5Api2Impl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl23Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl23Core1 lib5api2impl23core1;
        lib5api2impl23core1.doSomething();
        Lib5Api2Impl23Core2 lib5api2impl23core2;
        lib5api2impl23core2.doSomething();
        Lib5Api2Impl24Api1 lib5api2impl24api1;
        lib5api2impl24api1.doSomething();
        Lib5Api2Impl24Api2 lib5api2impl24api2;
        lib5api2impl24api2.doSomething();
        Lib5Api2Impl24Api3 lib5api2impl24api3;
        lib5api2impl24api3.doSomething();
        visited = 1;
    }
}
