// GENERATED SOURCE FILE

#include "lib11impl_private.h"
#include "lib11impl_impl.h"
#include "lib11core1.h"
#include "lib11core2.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11implimpl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl30api24(int a, int b) {
    return a + b;
}

int Lib11ImplImpl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11ImplImpl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11ImplImpl30Api2" << std::endl;
        Lib11Core1 lib11core1;
        lib11core1.doSomething();
        Lib11Core2 lib11core2;
        lib11core2.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11ImplImpl30Impl lib11implimpl30impl;
        lib11implimpl30impl.doSomething();
        Lib11ImplImpl31Api1 lib11implimpl31api1;
        lib11implimpl31api1.doSomething();
        Lib11ImplImpl31Api2 lib11implimpl31api2;
        lib11implimpl31api2.doSomething();
        Lib11ImplImpl31Api3 lib11implimpl31api3;
        lib11implimpl31api3.doSomething();
        visited = 1;
    }
}

