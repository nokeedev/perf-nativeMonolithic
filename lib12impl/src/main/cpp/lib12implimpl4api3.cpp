// GENERATED SOURCE FILE

#include "lib12impl_private.h"
#include "lib12impl_impl.h"
#include "lib12core1.h"
#include "lib12core2.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12implimpl4api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl4api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl4api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl4api34(int a, int b) {
    return a + b;
}

int Lib12ImplImpl4Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl4Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl4Api3" << std::endl;
        Lib12Core1 lib12core1;
        lib12core1.doSomething();
        Lib12Core2 lib12core2;
        lib12core2.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12ImplImpl4Impl lib12implimpl4impl;
        lib12implimpl4impl.doSomething();
        Lib12ImplImpl5Api1 lib12implimpl5api1;
        lib12implimpl5api1.doSomething();
        Lib12ImplImpl5Api2 lib12implimpl5api2;
        lib12implimpl5api2.doSomething();
        Lib12ImplImpl5Api3 lib12implimpl5api3;
        lib12implimpl5api3.doSomething();
        visited = 1;
    }
}

