// GENERATED SOURCE FILE

#include "lib16impl_private.h"
#include "lib16impl_impl.h"
#include "lib16core1.h"
#include "lib16core2.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16implimpl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl32impl4(int a, int b) {
    return a + b;
}

int Lib16ImplImpl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl32Impl" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl32Core1 lib16implimpl32core1;
        lib16implimpl32core1.doSomething();
        Lib16ImplImpl32Core2 lib16implimpl32core2;
        lib16implimpl32core2.doSomething();
        Lib16ImplImpl33Api1 lib16implimpl33api1;
        lib16implimpl33api1.doSomething();
        Lib16ImplImpl33Api2 lib16implimpl33api2;
        lib16implimpl33api2.doSomething();
        Lib16ImplImpl33Api3 lib16implimpl33api3;
        lib16implimpl33api3.doSomething();
        visited = 1;
    }
}

