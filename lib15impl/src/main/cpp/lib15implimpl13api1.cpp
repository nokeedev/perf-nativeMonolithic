// GENERATED SOURCE FILE

#include "lib15impl_private.h"
#include "lib15impl_impl.h"
#include "lib15core1.h"
#include "lib15core2.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15implimpl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl13api14(int a, int b) {
    return a + b;
}

int Lib15ImplImpl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl13Api1" << std::endl;
        Lib15Core1 lib15core1;
        lib15core1.doSomething();
        Lib15Core2 lib15core2;
        lib15core2.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15ImplImpl14Api1 lib15implimpl14api1;
        lib15implimpl14api1.doSomething();
        Lib15ImplImpl13Impl lib15implimpl13impl;
        lib15implimpl13impl.doSomething();
        Lib15ImplImpl14Api2 lib15implimpl14api2;
        lib15implimpl14api2.doSomething();
        Lib15ImplImpl14Api3 lib15implimpl14api3;
        lib15implimpl14api3.doSomething();
        visited = 1;
    }
}

