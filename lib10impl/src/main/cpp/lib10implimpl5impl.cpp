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
int lib10implimpl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl5impl4(int a, int b) {
    return a + b;
}

int Lib10ImplImpl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl5Impl" << std::endl;
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
        Lib10ImplImpl5Core1 lib10implimpl5core1;
        lib10implimpl5core1.doSomething();
        Lib10ImplImpl5Core2 lib10implimpl5core2;
        lib10implimpl5core2.doSomething();
        Lib10ImplImpl6Api1 lib10implimpl6api1;
        lib10implimpl6api1.doSomething();
        Lib10ImplImpl6Api2 lib10implimpl6api2;
        lib10implimpl6api2.doSomething();
        Lib10ImplImpl6Api3 lib10implimpl6api3;
        lib10implimpl6api3.doSomething();
        visited = 1;
    }
}

