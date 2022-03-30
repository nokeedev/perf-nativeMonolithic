// GENERATED SOURCE FILE

#include "lib13api3_private.h"
#include "lib13api3_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api3impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl17impl4(int a, int b) {
    return a + b;
}

int Lib13Api3Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl17Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl17Core1 lib13api3impl17core1;
        lib13api3impl17core1.doSomething();
        Lib13Api3Impl17Core2 lib13api3impl17core2;
        lib13api3impl17core2.doSomething();
        Lib13Api3Impl18Api1 lib13api3impl18api1;
        lib13api3impl18api1.doSomething();
        Lib13Api3Impl18Api2 lib13api3impl18api2;
        lib13api3impl18api2.doSomething();
        Lib13Api3Impl18Api3 lib13api3impl18api3;
        lib13api3impl18api3.doSomething();
        visited = 1;
    }
}

