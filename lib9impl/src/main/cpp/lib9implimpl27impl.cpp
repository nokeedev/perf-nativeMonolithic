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
int lib9implimpl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl27impl4(int a, int b) {
    return a + b;
}

int Lib9ImplImpl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl27Impl" << std::endl;
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
        Lib9ImplImpl27Core1 lib9implimpl27core1;
        lib9implimpl27core1.doSomething();
        Lib9ImplImpl27Core2 lib9implimpl27core2;
        lib9implimpl27core2.doSomething();
        Lib9ImplImpl28Api1 lib9implimpl28api1;
        lib9implimpl28api1.doSomething();
        Lib9ImplImpl28Api2 lib9implimpl28api2;
        lib9implimpl28api2.doSomething();
        Lib9ImplImpl28Api3 lib9implimpl28api3;
        lib9implimpl28api3.doSomething();
        visited = 1;
    }
}

