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
int lib15implimpl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl32impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl32Impl" << std::endl;
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
        Lib15ImplImpl32Core1 lib15implimpl32core1;
        lib15implimpl32core1.doSomething();
        Lib15ImplImpl32Core2 lib15implimpl32core2;
        lib15implimpl32core2.doSomething();
        Lib15ImplImpl33Api1 lib15implimpl33api1;
        lib15implimpl33api1.doSomething();
        Lib15ImplImpl33Api2 lib15implimpl33api2;
        lib15implimpl33api2.doSomething();
        Lib15ImplImpl33Api3 lib15implimpl33api3;
        lib15implimpl33api3.doSomething();
        visited = 1;
    }
}

