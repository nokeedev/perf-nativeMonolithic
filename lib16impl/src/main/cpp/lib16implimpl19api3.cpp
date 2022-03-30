// GENERATED SOURCE FILE

#include "lib16impl_private.h"
#include "lib16impl_impl.h"
#include "lib16core1.h"
#include "lib16core2.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16implimpl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl19api34(int a, int b) {
    return a + b;
}

int Lib16ImplImpl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl19Api3" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl19Impl lib16implimpl19impl;
        lib16implimpl19impl.doSomething();
        Lib16ImplImpl20Api1 lib16implimpl20api1;
        lib16implimpl20api1.doSomething();
        Lib16ImplImpl20Api2 lib16implimpl20api2;
        lib16implimpl20api2.doSomething();
        Lib16ImplImpl20Api3 lib16implimpl20api3;
        lib16implimpl20api3.doSomething();
        visited = 1;
    }
}

