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
int lib14implimpl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl21api14(int a, int b) {
    return a + b;
}

int Lib14ImplImpl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl21Api1" << std::endl;
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
        Lib14ImplImpl22Api1 lib14implimpl22api1;
        lib14implimpl22api1.doSomething();
        Lib14ImplImpl21Impl lib14implimpl21impl;
        lib14implimpl21impl.doSomething();
        Lib14ImplImpl22Api2 lib14implimpl22api2;
        lib14implimpl22api2.doSomething();
        Lib14ImplImpl22Api3 lib14implimpl22api3;
        lib14implimpl22api3.doSomething();
        visited = 1;
    }
}

