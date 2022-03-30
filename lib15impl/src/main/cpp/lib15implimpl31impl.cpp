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
int lib15implimpl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl31impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl31Impl" << std::endl;
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
        Lib15ImplImpl31Core1 lib15implimpl31core1;
        lib15implimpl31core1.doSomething();
        Lib15ImplImpl31Core2 lib15implimpl31core2;
        lib15implimpl31core2.doSomething();
        Lib15ImplImpl32Api1 lib15implimpl32api1;
        lib15implimpl32api1.doSomething();
        Lib15ImplImpl32Api2 lib15implimpl32api2;
        lib15implimpl32api2.doSomething();
        Lib15ImplImpl32Api3 lib15implimpl32api3;
        lib15implimpl32api3.doSomething();
        visited = 1;
    }
}

