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
int lib8implimpl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl32impl4(int a, int b) {
    return a + b;
}

int Lib8ImplImpl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl32Impl" << std::endl;
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
        Lib8ImplImpl32Core1 lib8implimpl32core1;
        lib8implimpl32core1.doSomething();
        Lib8ImplImpl32Core2 lib8implimpl32core2;
        lib8implimpl32core2.doSomething();
        Lib8ImplImpl33Api1 lib8implimpl33api1;
        lib8implimpl33api1.doSomething();
        Lib8ImplImpl33Api2 lib8implimpl33api2;
        lib8implimpl33api2.doSomething();
        Lib8ImplImpl33Api3 lib8implimpl33api3;
        lib8implimpl33api3.doSomething();
        visited = 1;
    }
}

