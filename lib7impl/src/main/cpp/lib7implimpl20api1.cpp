// GENERATED SOURCE FILE

#include "lib7impl_private.h"
#include "lib7impl_impl.h"
#include "lib7core1.h"
#include "lib7core2.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7implimpl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl20api14(int a, int b) {
    return a + b;
}

int Lib7ImplImpl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl20Api1" << std::endl;
        Lib7Core1 lib7core1;
        lib7core1.doSomething();
        Lib7Core2 lib7core2;
        lib7core2.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7ImplImpl21Api1 lib7implimpl21api1;
        lib7implimpl21api1.doSomething();
        Lib7ImplImpl20Impl lib7implimpl20impl;
        lib7implimpl20impl.doSomething();
        Lib7ImplImpl21Api2 lib7implimpl21api2;
        lib7implimpl21api2.doSomething();
        Lib7ImplImpl21Api3 lib7implimpl21api3;
        lib7implimpl21api3.doSomething();
        visited = 1;
    }
}

