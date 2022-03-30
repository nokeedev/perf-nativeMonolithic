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
int lib10implimpl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl26impl4(int a, int b) {
    return a + b;
}

int Lib10ImplImpl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl26Impl" << std::endl;
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
        Lib10ImplImpl26Core1 lib10implimpl26core1;
        lib10implimpl26core1.doSomething();
        Lib10ImplImpl26Core2 lib10implimpl26core2;
        lib10implimpl26core2.doSomething();
        Lib10ImplImpl27Api1 lib10implimpl27api1;
        lib10implimpl27api1.doSomething();
        Lib10ImplImpl27Api2 lib10implimpl27api2;
        lib10implimpl27api2.doSomething();
        Lib10ImplImpl27Api3 lib10implimpl27api3;
        lib10implimpl27api3.doSomething();
        visited = 1;
    }
}

