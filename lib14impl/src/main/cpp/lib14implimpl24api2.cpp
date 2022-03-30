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
int lib14implimpl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl24api24(int a, int b) {
    return a + b;
}

int Lib14ImplImpl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl24Api2" << std::endl;
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
        Lib14ImplImpl24Impl lib14implimpl24impl;
        lib14implimpl24impl.doSomething();
        Lib14ImplImpl25Api1 lib14implimpl25api1;
        lib14implimpl25api1.doSomething();
        Lib14ImplImpl25Api2 lib14implimpl25api2;
        lib14implimpl25api2.doSomething();
        Lib14ImplImpl25Api3 lib14implimpl25api3;
        lib14implimpl25api3.doSomething();
        visited = 1;
    }
}

