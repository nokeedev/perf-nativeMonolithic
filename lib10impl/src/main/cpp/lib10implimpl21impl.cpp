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
int lib10implimpl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl21impl4(int a, int b) {
    return a + b;
}

int Lib10ImplImpl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl21Impl" << std::endl;
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
        Lib10ImplImpl21Core1 lib10implimpl21core1;
        lib10implimpl21core1.doSomething();
        Lib10ImplImpl21Core2 lib10implimpl21core2;
        lib10implimpl21core2.doSomething();
        Lib10ImplImpl22Api1 lib10implimpl22api1;
        lib10implimpl22api1.doSomething();
        Lib10ImplImpl22Api2 lib10implimpl22api2;
        lib10implimpl22api2.doSomething();
        Lib10ImplImpl22Api3 lib10implimpl22api3;
        lib10implimpl22api3.doSomething();
        visited = 1;
    }
}

