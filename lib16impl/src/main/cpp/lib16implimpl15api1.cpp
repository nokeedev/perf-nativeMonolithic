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
int lib16implimpl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl15api14(int a, int b) {
    return a + b;
}

int Lib16ImplImpl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl15Api1" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl16Api1 lib16implimpl16api1;
        lib16implimpl16api1.doSomething();
        Lib16ImplImpl15Impl lib16implimpl15impl;
        lib16implimpl15impl.doSomething();
        Lib16ImplImpl16Api2 lib16implimpl16api2;
        lib16implimpl16api2.doSomething();
        Lib16ImplImpl16Api3 lib16implimpl16api3;
        lib16implimpl16api3.doSomething();
        visited = 1;
    }
}

