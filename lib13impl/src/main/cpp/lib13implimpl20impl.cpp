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
int lib13implimpl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl20impl4(int a, int b) {
    return a + b;
}

int Lib13ImplImpl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl20Impl" << std::endl;
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
        Lib13ImplImpl20Core1 lib13implimpl20core1;
        lib13implimpl20core1.doSomething();
        Lib13ImplImpl20Core2 lib13implimpl20core2;
        lib13implimpl20core2.doSomething();
        Lib13ImplImpl21Api1 lib13implimpl21api1;
        lib13implimpl21api1.doSomething();
        Lib13ImplImpl21Api2 lib13implimpl21api2;
        lib13implimpl21api2.doSomething();
        Lib13ImplImpl21Api3 lib13implimpl21api3;
        lib13implimpl21api3.doSomething();
        visited = 1;
    }
}

