// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib15Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl25Impl" << std::endl;
        Lib15Core2Impl25Core1 lib15core2impl25core1;
        lib15core2impl25core1.doSomething();
        Lib15Core2Impl25Core2 lib15core2impl25core2;
        lib15core2impl25core2.doSomething();
        Lib15Core2Impl26Api1 lib15core2impl26api1;
        lib15core2impl26api1.doSomething();
        Lib15Core2Impl26Api2 lib15core2impl26api2;
        lib15core2impl26api2.doSomething();
        Lib15Core2Impl26Api3 lib15core2impl26api3;
        lib15core2impl26api3.doSomething();
        visited = 1;
    }
}

