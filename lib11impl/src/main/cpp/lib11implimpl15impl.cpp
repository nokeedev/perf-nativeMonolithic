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
int lib11implimpl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl15impl4(int a, int b) {
    return a + b;
}

int Lib11ImplImpl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11ImplImpl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11ImplImpl15Impl" << std::endl;
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
        Lib11ImplImpl15Core1 lib11implimpl15core1;
        lib11implimpl15core1.doSomething();
        Lib11ImplImpl15Core2 lib11implimpl15core2;
        lib11implimpl15core2.doSomething();
        Lib11ImplImpl16Api1 lib11implimpl16api1;
        lib11implimpl16api1.doSomething();
        Lib11ImplImpl16Api2 lib11implimpl16api2;
        lib11implimpl16api2.doSomething();
        Lib11ImplImpl16Api3 lib11implimpl16api3;
        lib11implimpl16api3.doSomething();
        visited = 1;
    }
}

