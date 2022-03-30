// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl6impl4(int a, int b) {
    return a + b;
}

int Lib12Api3Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl6Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl6Core1 lib12api3impl6core1;
        lib12api3impl6core1.doSomething();
        Lib12Api3Impl6Core2 lib12api3impl6core2;
        lib12api3impl6core2.doSomething();
        Lib12Api3Impl7Api1 lib12api3impl7api1;
        lib12api3impl7api1.doSomething();
        Lib12Api3Impl7Api2 lib12api3impl7api2;
        lib12api3impl7api2.doSomething();
        Lib12Api3Impl7Api3 lib12api3impl7api3;
        lib12api3impl7api3.doSomething();
        visited = 1;
    }
}

