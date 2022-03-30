// GENERATED SOURCE FILE

#include "lib8impl_private.h"
#include "lib8impl_impl.h"
#include "lib8core1.h"
#include "lib8core2.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8implimpl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl20impl4(int a, int b) {
    return a + b;
}

int Lib8ImplImpl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl20Impl" << std::endl;
        Lib8Core1 lib8core1;
        lib8core1.doSomething();
        Lib8Core2 lib8core2;
        lib8core2.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8ImplImpl20Core1 lib8implimpl20core1;
        lib8implimpl20core1.doSomething();
        Lib8ImplImpl20Core2 lib8implimpl20core2;
        lib8implimpl20core2.doSomething();
        Lib8ImplImpl21Api1 lib8implimpl21api1;
        lib8implimpl21api1.doSomething();
        Lib8ImplImpl21Api2 lib8implimpl21api2;
        lib8implimpl21api2.doSomething();
        Lib8ImplImpl21Api3 lib8implimpl21api3;
        lib8implimpl21api3.doSomething();
        visited = 1;
    }
}

