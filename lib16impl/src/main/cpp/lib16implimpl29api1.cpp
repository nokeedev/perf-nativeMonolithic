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
int lib16implimpl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl29api14(int a, int b) {
    return a + b;
}

int Lib16ImplImpl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl29Api1" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl30Api1 lib16implimpl30api1;
        lib16implimpl30api1.doSomething();
        Lib16ImplImpl29Impl lib16implimpl29impl;
        lib16implimpl29impl.doSomething();
        Lib16ImplImpl30Api2 lib16implimpl30api2;
        lib16implimpl30api2.doSomething();
        Lib16ImplImpl30Api3 lib16implimpl30api3;
        lib16implimpl30api3.doSomething();
        visited = 1;
    }
}

