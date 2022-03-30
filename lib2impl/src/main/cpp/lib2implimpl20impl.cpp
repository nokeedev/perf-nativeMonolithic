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
int lib2implimpl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl20impl4(int a, int b) {
    return a + b;
}

int Lib2ImplImpl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl20Impl" << std::endl;
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
        Lib2ImplImpl20Core1 lib2implimpl20core1;
        lib2implimpl20core1.doSomething();
        Lib2ImplImpl20Core2 lib2implimpl20core2;
        lib2implimpl20core2.doSomething();
        Lib2ImplImpl21Api1 lib2implimpl21api1;
        lib2implimpl21api1.doSomething();
        Lib2ImplImpl21Api2 lib2implimpl21api2;
        lib2implimpl21api2.doSomething();
        Lib2ImplImpl21Api3 lib2implimpl21api3;
        lib2implimpl21api3.doSomething();
        visited = 1;
    }
}

