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
int lib2implimpl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl14impl4(int a, int b) {
    return a + b;
}

int Lib2ImplImpl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl14Impl" << std::endl;
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
        Lib2ImplImpl14Core1 lib2implimpl14core1;
        lib2implimpl14core1.doSomething();
        Lib2ImplImpl14Core2 lib2implimpl14core2;
        lib2implimpl14core2.doSomething();
        Lib2ImplImpl15Api1 lib2implimpl15api1;
        lib2implimpl15api1.doSomething();
        Lib2ImplImpl15Api2 lib2implimpl15api2;
        lib2implimpl15api2.doSomething();
        Lib2ImplImpl15Api3 lib2implimpl15api3;
        lib2implimpl15api3.doSomething();
        visited = 1;
    }
}

