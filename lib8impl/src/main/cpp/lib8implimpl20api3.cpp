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
int lib8implimpl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl20api34(int a, int b) {
    return a + b;
}

int Lib8ImplImpl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl20Api3" << std::endl;
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
        Lib8ImplImpl20Impl lib8implimpl20impl;
        lib8implimpl20impl.doSomething();
        Lib8ImplImpl21Api1 lib8implimpl21api1;
        lib8implimpl21api1.doSomething();
        Lib8ImplImpl21Api2 lib8implimpl21api2;
        lib8implimpl21api2.doSomething();
        Lib8ImplImpl21Api3 lib8implimpl21api3;
        lib8implimpl21api3.doSomething();
        visited = 1;
    }
}

