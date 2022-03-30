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
int lib10implimpl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl24impl4(int a, int b) {
    return a + b;
}

int Lib10ImplImpl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl24Impl" << std::endl;
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
        Lib10ImplImpl24Core1 lib10implimpl24core1;
        lib10implimpl24core1.doSomething();
        Lib10ImplImpl24Core2 lib10implimpl24core2;
        lib10implimpl24core2.doSomething();
        Lib10ImplImpl25Api1 lib10implimpl25api1;
        lib10implimpl25api1.doSomething();
        Lib10ImplImpl25Api2 lib10implimpl25api2;
        lib10implimpl25api2.doSomething();
        Lib10ImplImpl25Api3 lib10implimpl25api3;
        lib10implimpl25api3.doSomething();
        visited = 1;
    }
}

