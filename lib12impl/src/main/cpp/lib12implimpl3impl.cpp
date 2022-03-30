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
int lib12implimpl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl3impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl3Impl" << std::endl;
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
        Lib12ImplImpl3Core1 lib12implimpl3core1;
        lib12implimpl3core1.doSomething();
        Lib12ImplImpl3Core2 lib12implimpl3core2;
        lib12implimpl3core2.doSomething();
        Lib12ImplImpl4Api1 lib12implimpl4api1;
        lib12implimpl4api1.doSomething();
        Lib12ImplImpl4Api2 lib12implimpl4api2;
        lib12implimpl4api2.doSomething();
        Lib12ImplImpl4Api3 lib12implimpl4api3;
        lib12implimpl4api3.doSomething();
        visited = 1;
    }
}

