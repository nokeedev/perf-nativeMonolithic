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
int lib15implimpl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl33api24(int a, int b) {
    return a + b;
}

int Lib15ImplImpl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl33Api2" << std::endl;
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
        Lib15ImplImpl33Impl lib15implimpl33impl;
        lib15implimpl33impl.doSomething();
        Lib15ImplImpl34Api lib15implimpl34api;
        lib15implimpl34api.doSomething();
        visited = 1;
    }
}

