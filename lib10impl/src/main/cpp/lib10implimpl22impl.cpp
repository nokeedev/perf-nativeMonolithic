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
int lib10implimpl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl22impl4(int a, int b) {
    return a + b;
}

int Lib10ImplImpl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl22Impl" << std::endl;
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
        Lib10ImplImpl22Core1 lib10implimpl22core1;
        lib10implimpl22core1.doSomething();
        Lib10ImplImpl22Core2 lib10implimpl22core2;
        lib10implimpl22core2.doSomething();
        Lib10ImplImpl23Api1 lib10implimpl23api1;
        lib10implimpl23api1.doSomething();
        Lib10ImplImpl23Api2 lib10implimpl23api2;
        lib10implimpl23api2.doSomething();
        Lib10ImplImpl23Api3 lib10implimpl23api3;
        lib10implimpl23api3.doSomething();
        visited = 1;
    }
}

