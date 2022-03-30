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
int lib8implimpl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl4api14(int a, int b) {
    return a + b;
}

int Lib8ImplImpl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl4Api1" << std::endl;
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
        Lib8ImplImpl5Api1 lib8implimpl5api1;
        lib8implimpl5api1.doSomething();
        Lib8ImplImpl4Impl lib8implimpl4impl;
        lib8implimpl4impl.doSomething();
        Lib8ImplImpl5Api2 lib8implimpl5api2;
        lib8implimpl5api2.doSomething();
        Lib8ImplImpl5Api3 lib8implimpl5api3;
        lib8implimpl5api3.doSomething();
        visited = 1;
    }
}

