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
int lib7implimpl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl17api14(int a, int b) {
    return a + b;
}

int Lib7ImplImpl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl17Api1" << std::endl;
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
        Lib7ImplImpl18Api1 lib7implimpl18api1;
        lib7implimpl18api1.doSomething();
        Lib7ImplImpl17Impl lib7implimpl17impl;
        lib7implimpl17impl.doSomething();
        Lib7ImplImpl18Api2 lib7implimpl18api2;
        lib7implimpl18api2.doSomething();
        Lib7ImplImpl18Api3 lib7implimpl18api3;
        lib7implimpl18api3.doSomething();
        visited = 1;
    }
}
