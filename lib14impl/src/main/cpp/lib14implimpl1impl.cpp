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
int lib14implimpl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl1impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl1Impl" << std::endl;
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
        Lib14ImplImpl1Core1 lib14implimpl1core1;
        lib14implimpl1core1.doSomething();
        Lib14ImplImpl1Core2 lib14implimpl1core2;
        lib14implimpl1core2.doSomething();
        Lib14ImplImpl2Api1 lib14implimpl2api1;
        lib14implimpl2api1.doSomething();
        Lib14ImplImpl2Api2 lib14implimpl2api2;
        lib14implimpl2api2.doSomething();
        Lib14ImplImpl2Api3 lib14implimpl2api3;
        lib14implimpl2api3.doSomething();
        visited = 1;
    }
}

