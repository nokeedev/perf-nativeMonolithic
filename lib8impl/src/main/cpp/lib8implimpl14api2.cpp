// GENERATED SOURCE FILE

#include "lib8impl_private.h"
#include "lib8impl_impl.h"
#include "lib8core1.h"
#include "lib8core2.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8implimpl14api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl14api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl14api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl14api24(int a, int b) {
    return a + b;
}

int Lib8ImplImpl14Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl14Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl14Api2" << std::endl;
        Lib8Core1 lib8core1;
        lib8core1.doSomething();
        Lib8Core2 lib8core2;
        lib8core2.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8ImplImpl14Impl lib8implimpl14impl;
        lib8implimpl14impl.doSomething();
        Lib8ImplImpl15Api1 lib8implimpl15api1;
        lib8implimpl15api1.doSomething();
        Lib8ImplImpl15Api2 lib8implimpl15api2;
        lib8implimpl15api2.doSomething();
        Lib8ImplImpl15Api3 lib8implimpl15api3;
        lib8implimpl15api3.doSomething();
        visited = 1;
    }
}

