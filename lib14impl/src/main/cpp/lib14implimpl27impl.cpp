// GENERATED SOURCE FILE

#include "lib14impl_private.h"
#include "lib14impl_impl.h"
#include "lib14core1.h"
#include "lib14core2.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14implimpl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl27impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl27Impl" << std::endl;
        Lib14Core1 lib14core1;
        lib14core1.doSomething();
        Lib14Core2 lib14core2;
        lib14core2.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14ImplImpl27Core1 lib14implimpl27core1;
        lib14implimpl27core1.doSomething();
        Lib14ImplImpl27Core2 lib14implimpl27core2;
        lib14implimpl27core2.doSomething();
        Lib14ImplImpl28Api1 lib14implimpl28api1;
        lib14implimpl28api1.doSomething();
        Lib14ImplImpl28Api2 lib14implimpl28api2;
        lib14implimpl28api2.doSomething();
        Lib14ImplImpl28Api3 lib14implimpl28api3;
        lib14implimpl28api3.doSomething();
        visited = 1;
    }
}

