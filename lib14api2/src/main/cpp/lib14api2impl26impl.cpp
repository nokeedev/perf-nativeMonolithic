// GENERATED SOURCE FILE

#include "lib14api2_private.h"
#include "lib14api2_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api2impl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl26impl4(int a, int b) {
    return a + b;
}

int Lib14Api2Impl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl26Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl26Core1 lib14api2impl26core1;
        lib14api2impl26core1.doSomething();
        Lib14Api2Impl26Core2 lib14api2impl26core2;
        lib14api2impl26core2.doSomething();
        Lib14Api2Impl27Api1 lib14api2impl27api1;
        lib14api2impl27api1.doSomething();
        Lib14Api2Impl27Api2 lib14api2impl27api2;
        lib14api2impl27api2.doSomething();
        Lib14Api2Impl27Api3 lib14api2impl27api3;
        lib14api2impl27api3.doSomething();
        visited = 1;
    }
}

