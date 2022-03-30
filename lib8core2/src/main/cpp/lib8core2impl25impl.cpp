// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib8Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl25Impl" << std::endl;
        Lib8Core2Impl25Core1 lib8core2impl25core1;
        lib8core2impl25core1.doSomething();
        Lib8Core2Impl25Core2 lib8core2impl25core2;
        lib8core2impl25core2.doSomething();
        Lib8Core2Impl26Api1 lib8core2impl26api1;
        lib8core2impl26api1.doSomething();
        Lib8Core2Impl26Api2 lib8core2impl26api2;
        lib8core2impl26api2.doSomething();
        Lib8Core2Impl26Api3 lib8core2impl26api3;
        lib8core2impl26api3.doSomething();
        visited = 1;
    }
}

