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
int lib9implimpl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl4impl4(int a, int b) {
    return a + b;
}

int Lib9ImplImpl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl4Impl" << std::endl;
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
        Lib9ImplImpl4Core1 lib9implimpl4core1;
        lib9implimpl4core1.doSomething();
        Lib9ImplImpl4Core2 lib9implimpl4core2;
        lib9implimpl4core2.doSomething();
        Lib9ImplImpl5Api1 lib9implimpl5api1;
        lib9implimpl5api1.doSomething();
        Lib9ImplImpl5Api2 lib9implimpl5api2;
        lib9implimpl5api2.doSomething();
        Lib9ImplImpl5Api3 lib9implimpl5api3;
        lib9implimpl5api3.doSomething();
        visited = 1;
    }
}

