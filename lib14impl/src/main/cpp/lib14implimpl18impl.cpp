// GENERATED SOURCE FILE

#include "lib14impl_private.h"
#include "lib14impl_impl.h"
#include "lib14core1.h"
#include "lib14core2.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14implimpl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl18impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl18Impl" << std::endl;
        Lib14Core1 lib14core1;
        lib14core1.doSomething();
        Lib14Core2 lib14core2;
        lib14core2.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14ImplImpl18Core1 lib14implimpl18core1;
        lib14implimpl18core1.doSomething();
        Lib14ImplImpl18Core2 lib14implimpl18core2;
        lib14implimpl18core2.doSomething();
        Lib14ImplImpl19Api1 lib14implimpl19api1;
        lib14implimpl19api1.doSomething();
        Lib14ImplImpl19Api2 lib14implimpl19api2;
        lib14implimpl19api2.doSomething();
        Lib14ImplImpl19Api3 lib14implimpl19api3;
        lib14implimpl19api3.doSomething();
        visited = 1;
    }
}

