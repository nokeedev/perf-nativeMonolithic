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
int lib14implimpl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl15impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl15Impl" << std::endl;
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
        Lib14ImplImpl15Core1 lib14implimpl15core1;
        lib14implimpl15core1.doSomething();
        Lib14ImplImpl15Core2 lib14implimpl15core2;
        lib14implimpl15core2.doSomething();
        Lib14ImplImpl16Api1 lib14implimpl16api1;
        lib14implimpl16api1.doSomething();
        Lib14ImplImpl16Api2 lib14implimpl16api2;
        lib14implimpl16api2.doSomething();
        Lib14ImplImpl16Api3 lib14implimpl16api3;
        lib14implimpl16api3.doSomething();
        visited = 1;
    }
}

