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
int lib16implimpl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl2api34(int a, int b) {
    return a + b;
}

int Lib16ImplImpl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl2Api3" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl2Impl lib16implimpl2impl;
        lib16implimpl2impl.doSomething();
        Lib16ImplImpl3Api1 lib16implimpl3api1;
        lib16implimpl3api1.doSomething();
        Lib16ImplImpl3Api2 lib16implimpl3api2;
        lib16implimpl3api2.doSomething();
        Lib16ImplImpl3Api3 lib16implimpl3api3;
        lib16implimpl3api3.doSomething();
        visited = 1;
    }
}

