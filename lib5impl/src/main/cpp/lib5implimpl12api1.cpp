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
int lib5implimpl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl12api14(int a, int b) {
    return a + b;
}

int Lib5ImplImpl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl12Api1" << std::endl;
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
        Lib5ImplImpl13Api1 lib5implimpl13api1;
        lib5implimpl13api1.doSomething();
        Lib5ImplImpl12Impl lib5implimpl12impl;
        lib5implimpl12impl.doSomething();
        Lib5ImplImpl13Api2 lib5implimpl13api2;
        lib5implimpl13api2.doSomething();
        Lib5ImplImpl13Api3 lib5implimpl13api3;
        lib5implimpl13api3.doSomething();
        visited = 1;
    }
}

