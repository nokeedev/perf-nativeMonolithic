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
int lib10implimpl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl12api14(int a, int b) {
    return a + b;
}

int Lib10ImplImpl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl12Api1" << std::endl;
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
        Lib10ImplImpl13Api1 lib10implimpl13api1;
        lib10implimpl13api1.doSomething();
        Lib10ImplImpl12Impl lib10implimpl12impl;
        lib10implimpl12impl.doSomething();
        Lib10ImplImpl13Api2 lib10implimpl13api2;
        lib10implimpl13api2.doSomething();
        Lib10ImplImpl13Api3 lib10implimpl13api3;
        lib10implimpl13api3.doSomething();
        visited = 1;
    }
}

