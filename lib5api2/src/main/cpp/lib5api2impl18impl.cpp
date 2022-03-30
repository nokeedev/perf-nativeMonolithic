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
int lib5api2impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl18impl4(int a, int b) {
    return a + b;
}

int Lib5Api2Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl18Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl18Core1 lib5api2impl18core1;
        lib5api2impl18core1.doSomething();
        Lib5Api2Impl18Core2 lib5api2impl18core2;
        lib5api2impl18core2.doSomething();
        Lib5Api2Impl19Api1 lib5api2impl19api1;
        lib5api2impl19api1.doSomething();
        Lib5Api2Impl19Api2 lib5api2impl19api2;
        lib5api2impl19api2.doSomething();
        Lib5Api2Impl19Api3 lib5api2impl19api3;
        lib5api2impl19api3.doSomething();
        visited = 1;
    }
}

