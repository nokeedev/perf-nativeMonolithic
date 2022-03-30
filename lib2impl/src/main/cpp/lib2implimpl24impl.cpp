// GENERATED SOURCE FILE

#include "lib2impl_private.h"
#include "lib2impl_impl.h"
#include "lib2core1.h"
#include "lib2core2.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2implimpl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl24impl4(int a, int b) {
    return a + b;
}

int Lib2ImplImpl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl24Impl" << std::endl;
        Lib2Core1 lib2core1;
        lib2core1.doSomething();
        Lib2Core2 lib2core2;
        lib2core2.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2ImplImpl24Core1 lib2implimpl24core1;
        lib2implimpl24core1.doSomething();
        Lib2ImplImpl24Core2 lib2implimpl24core2;
        lib2implimpl24core2.doSomething();
        Lib2ImplImpl25Api1 lib2implimpl25api1;
        lib2implimpl25api1.doSomething();
        Lib2ImplImpl25Api2 lib2implimpl25api2;
        lib2implimpl25api2.doSomething();
        Lib2ImplImpl25Api3 lib2implimpl25api3;
        lib2implimpl25api3.doSomething();
        visited = 1;
    }
}

