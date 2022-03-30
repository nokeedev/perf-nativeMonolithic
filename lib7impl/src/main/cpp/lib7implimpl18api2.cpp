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
int lib7implimpl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl18api24(int a, int b) {
    return a + b;
}

int Lib7ImplImpl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl18Api2" << std::endl;
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
        Lib7ImplImpl18Impl lib7implimpl18impl;
        lib7implimpl18impl.doSomething();
        Lib7ImplImpl19Api1 lib7implimpl19api1;
        lib7implimpl19api1.doSomething();
        Lib7ImplImpl19Api2 lib7implimpl19api2;
        lib7implimpl19api2.doSomething();
        Lib7ImplImpl19Api3 lib7implimpl19api3;
        lib7implimpl19api3.doSomething();
        visited = 1;
    }
}

