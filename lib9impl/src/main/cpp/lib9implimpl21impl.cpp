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
int lib9implimpl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl21impl4(int a, int b) {
    return a + b;
}

int Lib9ImplImpl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl21Impl" << std::endl;
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
        Lib9ImplImpl21Core1 lib9implimpl21core1;
        lib9implimpl21core1.doSomething();
        Lib9ImplImpl21Core2 lib9implimpl21core2;
        lib9implimpl21core2.doSomething();
        Lib9ImplImpl22Api1 lib9implimpl22api1;
        lib9implimpl22api1.doSomething();
        Lib9ImplImpl22Api2 lib9implimpl22api2;
        lib9implimpl22api2.doSomething();
        Lib9ImplImpl22Api3 lib9implimpl22api3;
        lib9implimpl22api3.doSomething();
        visited = 1;
    }
}

