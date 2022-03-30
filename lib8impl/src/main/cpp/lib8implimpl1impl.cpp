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
int lib8implimpl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl1impl4(int a, int b) {
    return a + b;
}

int Lib8ImplImpl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl1Impl" << std::endl;
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
        Lib8ImplImpl1Core1 lib8implimpl1core1;
        lib8implimpl1core1.doSomething();
        Lib8ImplImpl1Core2 lib8implimpl1core2;
        lib8implimpl1core2.doSomething();
        Lib8ImplImpl2Api1 lib8implimpl2api1;
        lib8implimpl2api1.doSomething();
        Lib8ImplImpl2Api2 lib8implimpl2api2;
        lib8implimpl2api2.doSomething();
        Lib8ImplImpl2Api3 lib8implimpl2api3;
        lib8implimpl2api3.doSomething();
        visited = 1;
    }
}

