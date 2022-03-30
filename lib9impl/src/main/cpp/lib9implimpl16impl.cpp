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
int lib9implimpl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl16impl4(int a, int b) {
    return a + b;
}

int Lib9ImplImpl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl16Impl" << std::endl;
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
        Lib9ImplImpl16Core1 lib9implimpl16core1;
        lib9implimpl16core1.doSomething();
        Lib9ImplImpl16Core2 lib9implimpl16core2;
        lib9implimpl16core2.doSomething();
        Lib9ImplImpl17Api1 lib9implimpl17api1;
        lib9implimpl17api1.doSomething();
        Lib9ImplImpl17Api2 lib9implimpl17api2;
        lib9implimpl17api2.doSomething();
        Lib9ImplImpl17Api3 lib9implimpl17api3;
        lib9implimpl17api3.doSomething();
        visited = 1;
    }
}

