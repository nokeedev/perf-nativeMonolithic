// GENERATED SOURCE FILE

#include "lib11impl_private.h"
#include "lib11impl_impl.h"
#include "lib11core1.h"
#include "lib11core2.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11implimpl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl4impl4(int a, int b) {
    return a + b;
}

int Lib11ImplImpl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11ImplImpl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11ImplImpl4Impl" << std::endl;
        Lib11Core1 lib11core1;
        lib11core1.doSomething();
        Lib11Core2 lib11core2;
        lib11core2.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11ImplImpl4Core1 lib11implimpl4core1;
        lib11implimpl4core1.doSomething();
        Lib11ImplImpl4Core2 lib11implimpl4core2;
        lib11implimpl4core2.doSomething();
        Lib11ImplImpl5Api1 lib11implimpl5api1;
        lib11implimpl5api1.doSomething();
        Lib11ImplImpl5Api2 lib11implimpl5api2;
        lib11implimpl5api2.doSomething();
        Lib11ImplImpl5Api3 lib11implimpl5api3;
        lib11implimpl5api3.doSomething();
        visited = 1;
    }
}

