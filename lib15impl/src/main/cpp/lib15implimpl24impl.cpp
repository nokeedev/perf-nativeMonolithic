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
int lib15implimpl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl24impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl24Impl" << std::endl;
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
        Lib15ImplImpl24Core1 lib15implimpl24core1;
        lib15implimpl24core1.doSomething();
        Lib15ImplImpl24Core2 lib15implimpl24core2;
        lib15implimpl24core2.doSomething();
        Lib15ImplImpl25Api1 lib15implimpl25api1;
        lib15implimpl25api1.doSomething();
        Lib15ImplImpl25Api2 lib15implimpl25api2;
        lib15implimpl25api2.doSomething();
        Lib15ImplImpl25Api3 lib15implimpl25api3;
        lib15implimpl25api3.doSomething();
        visited = 1;
    }
}

