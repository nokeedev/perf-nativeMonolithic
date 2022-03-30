// GENERATED SOURCE FILE

#include "lib13impl_private.h"
#include "lib13impl_impl.h"
#include "lib13core1.h"
#include "lib13core2.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13implimpl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl32impl4(int a, int b) {
    return a + b;
}

int Lib13ImplImpl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl32Impl" << std::endl;
        Lib13Core1 lib13core1;
        lib13core1.doSomething();
        Lib13Core2 lib13core2;
        lib13core2.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13ImplImpl32Core1 lib13implimpl32core1;
        lib13implimpl32core1.doSomething();
        Lib13ImplImpl32Core2 lib13implimpl32core2;
        lib13implimpl32core2.doSomething();
        Lib13ImplImpl33Api1 lib13implimpl33api1;
        lib13implimpl33api1.doSomething();
        Lib13ImplImpl33Api2 lib13implimpl33api2;
        lib13implimpl33api2.doSomething();
        Lib13ImplImpl33Api3 lib13implimpl33api3;
        lib13implimpl33api3.doSomething();
        visited = 1;
    }
}

