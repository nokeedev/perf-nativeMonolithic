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
int lib11implimpl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl27impl4(int a, int b) {
    return a + b;
}

int Lib11ImplImpl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11ImplImpl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11ImplImpl27Impl" << std::endl;
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
        Lib11ImplImpl27Core1 lib11implimpl27core1;
        lib11implimpl27core1.doSomething();
        Lib11ImplImpl27Core2 lib11implimpl27core2;
        lib11implimpl27core2.doSomething();
        Lib11ImplImpl28Api1 lib11implimpl28api1;
        lib11implimpl28api1.doSomething();
        Lib11ImplImpl28Api2 lib11implimpl28api2;
        lib11implimpl28api2.doSomething();
        Lib11ImplImpl28Api3 lib11implimpl28api3;
        lib11implimpl28api3.doSomething();
        visited = 1;
    }
}

