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
int lib14implimpl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl34api4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl34Api" << std::endl;
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
        Lib14ImplImpl34Core lib14implimpl34core;
        lib14implimpl34core.doSomething();
        visited = 1;
    }
}

