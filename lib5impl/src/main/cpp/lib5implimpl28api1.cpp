// GENERATED SOURCE FILE

#include "lib5impl_private.h"
#include "lib5impl_impl.h"
#include "lib5core1.h"
#include "lib5core2.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5implimpl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl28api14(int a, int b) {
    return a + b;
}

int Lib5ImplImpl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl28Api1" << std::endl;
        Lib5Core1 lib5core1;
        lib5core1.doSomething();
        Lib5Core2 lib5core2;
        lib5core2.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5ImplImpl29Api1 lib5implimpl29api1;
        lib5implimpl29api1.doSomething();
        Lib5ImplImpl28Impl lib5implimpl28impl;
        lib5implimpl28impl.doSomething();
        Lib5ImplImpl29Api2 lib5implimpl29api2;
        lib5implimpl29api2.doSomething();
        Lib5ImplImpl29Api3 lib5implimpl29api3;
        lib5implimpl29api3.doSomething();
        visited = 1;
    }
}

