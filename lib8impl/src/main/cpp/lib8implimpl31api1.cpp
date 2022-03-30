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
int lib8implimpl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl31api14(int a, int b) {
    return a + b;
}

int Lib8ImplImpl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl31Api1" << std::endl;
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
        Lib8ImplImpl32Api1 lib8implimpl32api1;
        lib8implimpl32api1.doSomething();
        Lib8ImplImpl31Impl lib8implimpl31impl;
        lib8implimpl31impl.doSomething();
        Lib8ImplImpl32Api2 lib8implimpl32api2;
        lib8implimpl32api2.doSomething();
        Lib8ImplImpl32Api3 lib8implimpl32api3;
        lib8implimpl32api3.doSomething();
        visited = 1;
    }
}

