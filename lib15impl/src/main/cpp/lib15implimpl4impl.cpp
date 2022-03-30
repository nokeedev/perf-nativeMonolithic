// GENERATED SOURCE FILE

#include "lib15impl_private.h"
#include "lib15impl_impl.h"
#include "lib15core1.h"
#include "lib15core2.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15implimpl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl4impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl4Impl" << std::endl;
        Lib15Core1 lib15core1;
        lib15core1.doSomething();
        Lib15Core2 lib15core2;
        lib15core2.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15ImplImpl4Core1 lib15implimpl4core1;
        lib15implimpl4core1.doSomething();
        Lib15ImplImpl4Core2 lib15implimpl4core2;
        lib15implimpl4core2.doSomething();
        Lib15ImplImpl5Api1 lib15implimpl5api1;
        lib15implimpl5api1.doSomething();
        Lib15ImplImpl5Api2 lib15implimpl5api2;
        lib15implimpl5api2.doSomething();
        Lib15ImplImpl5Api3 lib15implimpl5api3;
        lib15implimpl5api3.doSomething();
        visited = 1;
    }
}

