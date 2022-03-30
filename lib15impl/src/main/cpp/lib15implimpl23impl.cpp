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
int lib15implimpl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl23impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl23Impl" << std::endl;
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
        Lib15ImplImpl23Core1 lib15implimpl23core1;
        lib15implimpl23core1.doSomething();
        Lib15ImplImpl23Core2 lib15implimpl23core2;
        lib15implimpl23core2.doSomething();
        Lib15ImplImpl24Api1 lib15implimpl24api1;
        lib15implimpl24api1.doSomething();
        Lib15ImplImpl24Api2 lib15implimpl24api2;
        lib15implimpl24api2.doSomething();
        Lib15ImplImpl24Api3 lib15implimpl24api3;
        lib15implimpl24api3.doSomething();
        visited = 1;
    }
}

