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
int lib14implimpl29impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl29impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl29impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl29impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl29Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl29Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl29Impl" << std::endl;
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
        Lib14ImplImpl29Core1 lib14implimpl29core1;
        lib14implimpl29core1.doSomething();
        Lib14ImplImpl29Core2 lib14implimpl29core2;
        lib14implimpl29core2.doSomething();
        Lib14ImplImpl30Api1 lib14implimpl30api1;
        lib14implimpl30api1.doSomething();
        Lib14ImplImpl30Api2 lib14implimpl30api2;
        lib14implimpl30api2.doSomething();
        Lib14ImplImpl30Api3 lib14implimpl30api3;
        lib14implimpl30api3.doSomething();
        visited = 1;
    }
}

