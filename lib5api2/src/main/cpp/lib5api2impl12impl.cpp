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
int lib5api2impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl12impl4(int a, int b) {
    return a + b;
}

int Lib5Api2Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl12Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl12Core1 lib5api2impl12core1;
        lib5api2impl12core1.doSomething();
        Lib5Api2Impl12Core2 lib5api2impl12core2;
        lib5api2impl12core2.doSomething();
        Lib5Api2Impl13Api1 lib5api2impl13api1;
        lib5api2impl13api1.doSomething();
        Lib5Api2Impl13Api2 lib5api2impl13api2;
        lib5api2impl13api2.doSomething();
        Lib5Api2Impl13Api3 lib5api2impl13api3;
        lib5api2impl13api3.doSomething();
        visited = 1;
    }
}

