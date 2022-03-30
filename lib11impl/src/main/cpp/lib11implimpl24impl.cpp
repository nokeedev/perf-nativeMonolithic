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
int lib11implimpl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl24impl4(int a, int b) {
    return a + b;
}

int Lib11ImplImpl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11ImplImpl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11ImplImpl24Impl" << std::endl;
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
        Lib11ImplImpl24Core1 lib11implimpl24core1;
        lib11implimpl24core1.doSomething();
        Lib11ImplImpl24Core2 lib11implimpl24core2;
        lib11implimpl24core2.doSomething();
        Lib11ImplImpl25Api1 lib11implimpl25api1;
        lib11implimpl25api1.doSomething();
        Lib11ImplImpl25Api2 lib11implimpl25api2;
        lib11implimpl25api2.doSomething();
        Lib11ImplImpl25Api3 lib11implimpl25api3;
        lib11implimpl25api3.doSomething();
        visited = 1;
    }
}

