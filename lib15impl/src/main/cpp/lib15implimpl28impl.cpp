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
int lib15implimpl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl28impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl28Impl" << std::endl;
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
        Lib15ImplImpl28Core1 lib15implimpl28core1;
        lib15implimpl28core1.doSomething();
        Lib15ImplImpl28Core2 lib15implimpl28core2;
        lib15implimpl28core2.doSomething();
        Lib15ImplImpl29Api1 lib15implimpl29api1;
        lib15implimpl29api1.doSomething();
        Lib15ImplImpl29Api2 lib15implimpl29api2;
        lib15implimpl29api2.doSomething();
        Lib15ImplImpl29Api3 lib15implimpl29api3;
        lib15implimpl29api3.doSomething();
        visited = 1;
    }
}

