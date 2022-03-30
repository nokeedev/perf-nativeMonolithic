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
int lib16implimpl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl8api24(int a, int b) {
    return a + b;
}

int Lib16ImplImpl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl8Api2" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl8Impl lib16implimpl8impl;
        lib16implimpl8impl.doSomething();
        Lib16ImplImpl9Api1 lib16implimpl9api1;
        lib16implimpl9api1.doSomething();
        Lib16ImplImpl9Api2 lib16implimpl9api2;
        lib16implimpl9api2.doSomething();
        Lib16ImplImpl9Api3 lib16implimpl9api3;
        lib16implimpl9api3.doSomething();
        visited = 1;
    }
}

