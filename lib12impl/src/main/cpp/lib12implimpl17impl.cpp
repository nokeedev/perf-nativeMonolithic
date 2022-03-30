// GENERATED SOURCE FILE

#include "lib12impl_private.h"
#include "lib12impl_impl.h"
#include "lib12core1.h"
#include "lib12core2.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12implimpl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl17impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl17Impl" << std::endl;
        Lib12Core1 lib12core1;
        lib12core1.doSomething();
        Lib12Core2 lib12core2;
        lib12core2.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12ImplImpl17Core1 lib12implimpl17core1;
        lib12implimpl17core1.doSomething();
        Lib12ImplImpl17Core2 lib12implimpl17core2;
        lib12implimpl17core2.doSomething();
        Lib12ImplImpl18Api1 lib12implimpl18api1;
        lib12implimpl18api1.doSomething();
        Lib12ImplImpl18Api2 lib12implimpl18api2;
        lib12implimpl18api2.doSomething();
        Lib12ImplImpl18Api3 lib12implimpl18api3;
        lib12implimpl18api3.doSomething();
        visited = 1;
    }
}

