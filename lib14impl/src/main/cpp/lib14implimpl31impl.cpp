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
int lib14implimpl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl31impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl31Impl" << std::endl;
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
        Lib14ImplImpl31Core1 lib14implimpl31core1;
        lib14implimpl31core1.doSomething();
        Lib14ImplImpl31Core2 lib14implimpl31core2;
        lib14implimpl31core2.doSomething();
        Lib14ImplImpl32Api1 lib14implimpl32api1;
        lib14implimpl32api1.doSomething();
        Lib14ImplImpl32Api2 lib14implimpl32api2;
        lib14implimpl32api2.doSomething();
        Lib14ImplImpl32Api3 lib14implimpl32api3;
        lib14implimpl32api3.doSomething();
        visited = 1;
    }
}

