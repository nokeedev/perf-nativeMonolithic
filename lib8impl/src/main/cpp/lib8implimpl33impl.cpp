// GENERATED SOURCE FILE

#include "lib8impl_private.h"
#include "lib8impl_impl.h"
#include "lib8core1.h"
#include "lib8core2.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8implimpl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl33impl4(int a, int b) {
    return a + b;
}

int Lib8ImplImpl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl33Impl" << std::endl;
        Lib8Core1 lib8core1;
        lib8core1.doSomething();
        Lib8Core2 lib8core2;
        lib8core2.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8ImplImpl33Core lib8implimpl33core;
        lib8implimpl33core.doSomething();
        Lib8ImplImpl34Api lib8implimpl34api;
        lib8implimpl34api.doSomething();
        visited = 1;
    }
}

