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
int lib5api2impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl24impl4(int a, int b) {
    return a + b;
}

int Lib5Api2Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl24Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl24Core1 lib5api2impl24core1;
        lib5api2impl24core1.doSomething();
        Lib5Api2Impl24Core2 lib5api2impl24core2;
        lib5api2impl24core2.doSomething();
        Lib5Api2Impl25Api1 lib5api2impl25api1;
        lib5api2impl25api1.doSomething();
        Lib5Api2Impl25Api2 lib5api2impl25api2;
        lib5api2impl25api2.doSomething();
        Lib5Api2Impl25Api3 lib5api2impl25api3;
        lib5api2impl25api3.doSomething();
        visited = 1;
    }
}

