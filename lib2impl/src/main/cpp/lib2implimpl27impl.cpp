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
int lib2implimpl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl27impl4(int a, int b) {
    return a + b;
}

int Lib2ImplImpl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl27Impl" << std::endl;
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
        Lib2ImplImpl27Core1 lib2implimpl27core1;
        lib2implimpl27core1.doSomething();
        Lib2ImplImpl27Core2 lib2implimpl27core2;
        lib2implimpl27core2.doSomething();
        Lib2ImplImpl28Api1 lib2implimpl28api1;
        lib2implimpl28api1.doSomething();
        Lib2ImplImpl28Api2 lib2implimpl28api2;
        lib2implimpl28api2.doSomething();
        Lib2ImplImpl28Api3 lib2implimpl28api3;
        lib2implimpl28api3.doSomething();
        visited = 1;
    }
}

