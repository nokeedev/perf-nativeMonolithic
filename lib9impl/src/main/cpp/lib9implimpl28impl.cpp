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
int lib9implimpl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl28impl4(int a, int b) {
    return a + b;
}

int Lib9ImplImpl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl28Impl" << std::endl;
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
        Lib9ImplImpl28Core1 lib9implimpl28core1;
        lib9implimpl28core1.doSomething();
        Lib9ImplImpl28Core2 lib9implimpl28core2;
        lib9implimpl28core2.doSomething();
        Lib9ImplImpl29Api1 lib9implimpl29api1;
        lib9implimpl29api1.doSomething();
        Lib9ImplImpl29Api2 lib9implimpl29api2;
        lib9implimpl29api2.doSomething();
        Lib9ImplImpl29Api3 lib9implimpl29api3;
        lib9implimpl29api3.doSomething();
        visited = 1;
    }
}

