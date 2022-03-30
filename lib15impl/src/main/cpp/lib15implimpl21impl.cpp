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
int lib15implimpl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl21impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl21Impl" << std::endl;
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
        Lib15ImplImpl21Core1 lib15implimpl21core1;
        lib15implimpl21core1.doSomething();
        Lib15ImplImpl21Core2 lib15implimpl21core2;
        lib15implimpl21core2.doSomething();
        Lib15ImplImpl22Api1 lib15implimpl22api1;
        lib15implimpl22api1.doSomething();
        Lib15ImplImpl22Api2 lib15implimpl22api2;
        lib15implimpl22api2.doSomething();
        Lib15ImplImpl22Api3 lib15implimpl22api3;
        lib15implimpl22api3.doSomething();
        visited = 1;
    }
}

