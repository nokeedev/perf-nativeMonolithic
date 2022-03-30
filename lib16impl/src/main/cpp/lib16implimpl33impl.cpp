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
int lib16implimpl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl33impl4(int a, int b) {
    return a + b;
}

int Lib16ImplImpl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl33Impl" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl33Core lib16implimpl33core;
        lib16implimpl33core.doSomething();
        Lib16ImplImpl34Api lib16implimpl34api;
        lib16implimpl34api.doSomething();
        visited = 1;
    }
}

