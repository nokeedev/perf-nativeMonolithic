// GENERATED SOURCE FILE

#include "lib3impl_private.h"
#include "lib3impl_impl.h"
#include "lib3core1.h"
#include "lib3core2.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3implimpl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl2impl4(int a, int b) {
    return a + b;
}

int Lib3ImplImpl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3ImplImpl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3ImplImpl2Impl" << std::endl;
        Lib3Core1 lib3core1;
        lib3core1.doSomething();
        Lib3Core2 lib3core2;
        lib3core2.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3ImplImpl2Core1 lib3implimpl2core1;
        lib3implimpl2core1.doSomething();
        Lib3ImplImpl2Core2 lib3implimpl2core2;
        lib3implimpl2core2.doSomething();
        Lib3ImplImpl3Api1 lib3implimpl3api1;
        lib3implimpl3api1.doSomething();
        Lib3ImplImpl3Api2 lib3implimpl3api2;
        lib3implimpl3api2.doSomething();
        Lib3ImplImpl3Api3 lib3implimpl3api3;
        lib3implimpl3api3.doSomething();
        visited = 1;
    }
}

