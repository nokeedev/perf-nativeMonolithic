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
int lib7implimpl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl3api24(int a, int b) {
    return a + b;
}

int Lib7ImplImpl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl3Api2" << std::endl;
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
        Lib7ImplImpl3Impl lib7implimpl3impl;
        lib7implimpl3impl.doSomething();
        Lib7ImplImpl4Api1 lib7implimpl4api1;
        lib7implimpl4api1.doSomething();
        Lib7ImplImpl4Api2 lib7implimpl4api2;
        lib7implimpl4api2.doSomething();
        Lib7ImplImpl4Api3 lib7implimpl4api3;
        lib7implimpl4api3.doSomething();
        visited = 1;
    }
}

