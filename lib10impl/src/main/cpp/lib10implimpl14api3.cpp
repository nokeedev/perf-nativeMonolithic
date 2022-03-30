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
int lib10implimpl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl14api34(int a, int b) {
    return a + b;
}

int Lib10ImplImpl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl14Api3" << std::endl;
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
        Lib10ImplImpl14Impl lib10implimpl14impl;
        lib10implimpl14impl.doSomething();
        Lib10ImplImpl15Api1 lib10implimpl15api1;
        lib10implimpl15api1.doSomething();
        Lib10ImplImpl15Api2 lib10implimpl15api2;
        lib10implimpl15api2.doSomething();
        Lib10ImplImpl15Api3 lib10implimpl15api3;
        lib10implimpl15api3.doSomething();
        visited = 1;
    }
}

