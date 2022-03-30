// GENERATED SOURCE FILE

#include "lib15impl_private.h"
#include "lib15impl_impl.h"
#include "lib15core1.h"
#include "lib15core2.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15implimpl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl25impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl25Impl" << std::endl;
        Lib15Core1 lib15core1;
        lib15core1.doSomething();
        Lib15Core2 lib15core2;
        lib15core2.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15ImplImpl25Core1 lib15implimpl25core1;
        lib15implimpl25core1.doSomething();
        Lib15ImplImpl25Core2 lib15implimpl25core2;
        lib15implimpl25core2.doSomething();
        Lib15ImplImpl26Api1 lib15implimpl26api1;
        lib15implimpl26api1.doSomething();
        Lib15ImplImpl26Api2 lib15implimpl26api2;
        lib15implimpl26api2.doSomething();
        Lib15ImplImpl26Api3 lib15implimpl26api3;
        lib15implimpl26api3.doSomething();
        visited = 1;
    }
}

