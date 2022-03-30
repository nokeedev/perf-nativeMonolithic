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
int lib2implimpl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl19impl4(int a, int b) {
    return a + b;
}

int Lib2ImplImpl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl19Impl" << std::endl;
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
        Lib2ImplImpl19Core1 lib2implimpl19core1;
        lib2implimpl19core1.doSomething();
        Lib2ImplImpl19Core2 lib2implimpl19core2;
        lib2implimpl19core2.doSomething();
        Lib2ImplImpl20Api1 lib2implimpl20api1;
        lib2implimpl20api1.doSomething();
        Lib2ImplImpl20Api2 lib2implimpl20api2;
        lib2implimpl20api2.doSomething();
        Lib2ImplImpl20Api3 lib2implimpl20api3;
        lib2implimpl20api3.doSomething();
        visited = 1;
    }
}

