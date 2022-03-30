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
int lib6api2impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl17impl4(int a, int b) {
    return a + b;
}

int Lib6Api2Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2Impl17Impl" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api2Impl17Core1 lib6api2impl17core1;
        lib6api2impl17core1.doSomething();
        Lib6Api2Impl17Core2 lib6api2impl17core2;
        lib6api2impl17core2.doSomething();
        Lib6Api2Impl18Api1 lib6api2impl18api1;
        lib6api2impl18api1.doSomething();
        Lib6Api2Impl18Api2 lib6api2impl18api2;
        lib6api2impl18api2.doSomething();
        Lib6Api2Impl18Api3 lib6api2impl18api3;
        lib6api2impl18api3.doSomething();
        visited = 1;
    }
}

