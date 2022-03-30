// GENERATED SOURCE FILE

#include "lib10impl_private.h"
#include "lib10impl_impl.h"
#include "lib10core1.h"
#include "lib10core2.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10implimpl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl13api14(int a, int b) {
    return a + b;
}

int Lib10ImplImpl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl13Api1" << std::endl;
        Lib10Core1 lib10core1;
        lib10core1.doSomething();
        Lib10Core2 lib10core2;
        lib10core2.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10ImplImpl14Api1 lib10implimpl14api1;
        lib10implimpl14api1.doSomething();
        Lib10ImplImpl13Impl lib10implimpl13impl;
        lib10implimpl13impl.doSomething();
        Lib10ImplImpl14Api2 lib10implimpl14api2;
        lib10implimpl14api2.doSomething();
        Lib10ImplImpl14Api3 lib10implimpl14api3;
        lib10implimpl14api3.doSomething();
        visited = 1;
    }
}

