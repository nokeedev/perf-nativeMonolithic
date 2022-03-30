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
int lib15implimpl1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl1api34(int a, int b) {
    return a + b;
}

int Lib15ImplImpl1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl1Api3" << std::endl;
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
        Lib15ImplImpl1Impl lib15implimpl1impl;
        lib15implimpl1impl.doSomething();
        Lib15ImplImpl2Api1 lib15implimpl2api1;
        lib15implimpl2api1.doSomething();
        Lib15ImplImpl2Api2 lib15implimpl2api2;
        lib15implimpl2api2.doSomething();
        Lib15ImplImpl2Api3 lib15implimpl2api3;
        lib15implimpl2api3.doSomething();
        visited = 1;
    }
}

