// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib13Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl25Impl" << std::endl;
        Lib13Core2Impl25Core1 lib13core2impl25core1;
        lib13core2impl25core1.doSomething();
        Lib13Core2Impl25Core2 lib13core2impl25core2;
        lib13core2impl25core2.doSomething();
        Lib13Core2Impl26Api1 lib13core2impl26api1;
        lib13core2impl26api1.doSomething();
        Lib13Core2Impl26Api2 lib13core2impl26api2;
        lib13core2impl26api2.doSomething();
        Lib13Core2Impl26Api3 lib13core2impl26api3;
        lib13core2impl26api3.doSomething();
        visited = 1;
    }
}

