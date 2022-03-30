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
int lib10implimpl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl33api34(int a, int b) {
    return a + b;
}

int Lib10ImplImpl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl33Api3" << std::endl;
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
        Lib10ImplImpl33Impl lib10implimpl33impl;
        lib10implimpl33impl.doSomething();
        Lib10ImplImpl34Api lib10implimpl34api;
        lib10implimpl34api.doSomething();
        visited = 1;
    }
}

