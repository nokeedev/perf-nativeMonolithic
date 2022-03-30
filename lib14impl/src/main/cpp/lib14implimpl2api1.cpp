// GENERATED SOURCE FILE

#include "lib14impl_private.h"
#include "lib14impl_impl.h"
#include "lib14core1.h"
#include "lib14core2.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14implimpl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl2api14(int a, int b) {
    return a + b;
}

int Lib14ImplImpl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl2Api1" << std::endl;
        Lib14Core1 lib14core1;
        lib14core1.doSomething();
        Lib14Core2 lib14core2;
        lib14core2.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14ImplImpl3Api1 lib14implimpl3api1;
        lib14implimpl3api1.doSomething();
        Lib14ImplImpl2Impl lib14implimpl2impl;
        lib14implimpl2impl.doSomething();
        Lib14ImplImpl3Api2 lib14implimpl3api2;
        lib14implimpl3api2.doSomething();
        Lib14ImplImpl3Api3 lib14implimpl3api3;
        lib14implimpl3api3.doSomething();
        visited = 1;
    }
}

