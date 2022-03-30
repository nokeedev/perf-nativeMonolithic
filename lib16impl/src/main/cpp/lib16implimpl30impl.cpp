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
int lib16implimpl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl30impl4(int a, int b) {
    return a + b;
}

int Lib16ImplImpl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl30Impl" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl30Core1 lib16implimpl30core1;
        lib16implimpl30core1.doSomething();
        Lib16ImplImpl30Core2 lib16implimpl30core2;
        lib16implimpl30core2.doSomething();
        Lib16ImplImpl31Api1 lib16implimpl31api1;
        lib16implimpl31api1.doSomething();
        Lib16ImplImpl31Api2 lib16implimpl31api2;
        lib16implimpl31api2.doSomething();
        Lib16ImplImpl31Api3 lib16implimpl31api3;
        lib16implimpl31api3.doSomething();
        visited = 1;
    }
}

