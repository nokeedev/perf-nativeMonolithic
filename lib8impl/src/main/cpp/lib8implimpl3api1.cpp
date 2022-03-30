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
int lib8implimpl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl3api14(int a, int b) {
    return a + b;
}

int Lib8ImplImpl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl3Api1" << std::endl;
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
        Lib8ImplImpl4Api1 lib8implimpl4api1;
        lib8implimpl4api1.doSomething();
        Lib8ImplImpl3Impl lib8implimpl3impl;
        lib8implimpl3impl.doSomething();
        Lib8ImplImpl4Api2 lib8implimpl4api2;
        lib8implimpl4api2.doSomething();
        Lib8ImplImpl4Api3 lib8implimpl4api3;
        lib8implimpl4api3.doSomething();
        visited = 1;
    }
}

