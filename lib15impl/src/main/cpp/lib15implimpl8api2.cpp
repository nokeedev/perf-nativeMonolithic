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
int lib15implimpl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl8api24(int a, int b) {
    return a + b;
}

int Lib15ImplImpl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl8Api2" << std::endl;
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
        Lib15ImplImpl8Impl lib15implimpl8impl;
        lib15implimpl8impl.doSomething();
        Lib15ImplImpl9Api1 lib15implimpl9api1;
        lib15implimpl9api1.doSomething();
        Lib15ImplImpl9Api2 lib15implimpl9api2;
        lib15implimpl9api2.doSomething();
        Lib15ImplImpl9Api3 lib15implimpl9api3;
        lib15implimpl9api3.doSomething();
        visited = 1;
    }
}

