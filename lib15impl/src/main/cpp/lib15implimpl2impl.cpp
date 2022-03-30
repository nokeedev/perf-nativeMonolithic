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
int lib15implimpl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl2impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl2Impl" << std::endl;
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
        Lib15ImplImpl2Core1 lib15implimpl2core1;
        lib15implimpl2core1.doSomething();
        Lib15ImplImpl2Core2 lib15implimpl2core2;
        lib15implimpl2core2.doSomething();
        Lib15ImplImpl3Api1 lib15implimpl3api1;
        lib15implimpl3api1.doSomething();
        Lib15ImplImpl3Api2 lib15implimpl3api2;
        lib15implimpl3api2.doSomething();
        Lib15ImplImpl3Api3 lib15implimpl3api3;
        lib15implimpl3api3.doSomething();
        visited = 1;
    }
}

