// GENERATED SOURCE FILE

#include "lib9impl_private.h"
#include "lib9impl_impl.h"
#include "lib9core1.h"
#include "lib9core2.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9implimpl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl2impl4(int a, int b) {
    return a + b;
}

int Lib9ImplImpl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl2Impl" << std::endl;
        Lib9Core1 lib9core1;
        lib9core1.doSomething();
        Lib9Core2 lib9core2;
        lib9core2.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9ImplImpl2Core1 lib9implimpl2core1;
        lib9implimpl2core1.doSomething();
        Lib9ImplImpl2Core2 lib9implimpl2core2;
        lib9implimpl2core2.doSomething();
        Lib9ImplImpl3Api1 lib9implimpl3api1;
        lib9implimpl3api1.doSomething();
        Lib9ImplImpl3Api2 lib9implimpl3api2;
        lib9implimpl3api2.doSomething();
        Lib9ImplImpl3Api3 lib9implimpl3api3;
        lib9implimpl3api3.doSomething();
        visited = 1;
    }
}

