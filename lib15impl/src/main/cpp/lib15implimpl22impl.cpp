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
int lib15implimpl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl22impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl22Impl" << std::endl;
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
        Lib15ImplImpl22Core1 lib15implimpl22core1;
        lib15implimpl22core1.doSomething();
        Lib15ImplImpl22Core2 lib15implimpl22core2;
        lib15implimpl22core2.doSomething();
        Lib15ImplImpl23Api1 lib15implimpl23api1;
        lib15implimpl23api1.doSomething();
        Lib15ImplImpl23Api2 lib15implimpl23api2;
        lib15implimpl23api2.doSomething();
        Lib15ImplImpl23Api3 lib15implimpl23api3;
        lib15implimpl23api3.doSomething();
        visited = 1;
    }
}

