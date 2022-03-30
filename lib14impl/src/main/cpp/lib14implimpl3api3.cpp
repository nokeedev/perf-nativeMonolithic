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
int lib14implimpl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl3api34(int a, int b) {
    return a + b;
}

int Lib14ImplImpl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl3Api3" << std::endl;
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
        Lib14ImplImpl3Impl lib14implimpl3impl;
        lib14implimpl3impl.doSomething();
        Lib14ImplImpl4Api1 lib14implimpl4api1;
        lib14implimpl4api1.doSomething();
        Lib14ImplImpl4Api2 lib14implimpl4api2;
        lib14implimpl4api2.doSomething();
        Lib14ImplImpl4Api3 lib14implimpl4api3;
        lib14implimpl4api3.doSomething();
        visited = 1;
    }
}

