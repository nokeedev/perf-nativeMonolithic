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
int lib10implimpl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl25impl4(int a, int b) {
    return a + b;
}

int Lib10ImplImpl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl25Impl" << std::endl;
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
        Lib10ImplImpl25Core1 lib10implimpl25core1;
        lib10implimpl25core1.doSomething();
        Lib10ImplImpl25Core2 lib10implimpl25core2;
        lib10implimpl25core2.doSomething();
        Lib10ImplImpl26Api1 lib10implimpl26api1;
        lib10implimpl26api1.doSomething();
        Lib10ImplImpl26Api2 lib10implimpl26api2;
        lib10implimpl26api2.doSomething();
        Lib10ImplImpl26Api3 lib10implimpl26api3;
        lib10implimpl26api3.doSomething();
        visited = 1;
    }
}

