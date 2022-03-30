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
int lib14implimpl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl11api34(int a, int b) {
    return a + b;
}

int Lib14ImplImpl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl11Api3" << std::endl;
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
        Lib14ImplImpl11Impl lib14implimpl11impl;
        lib14implimpl11impl.doSomething();
        Lib14ImplImpl12Api1 lib14implimpl12api1;
        lib14implimpl12api1.doSomething();
        Lib14ImplImpl12Api2 lib14implimpl12api2;
        lib14implimpl12api2.doSomething();
        Lib14ImplImpl12Api3 lib14implimpl12api3;
        lib14implimpl12api3.doSomething();
        visited = 1;
    }
}

