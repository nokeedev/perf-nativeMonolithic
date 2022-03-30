// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl25Impl" << std::endl;
        Lib11Core2Impl25Core1 lib11core2impl25core1;
        lib11core2impl25core1.doSomething();
        Lib11Core2Impl25Core2 lib11core2impl25core2;
        lib11core2impl25core2.doSomething();
        Lib11Core2Impl26Api1 lib11core2impl26api1;
        lib11core2impl26api1.doSomething();
        Lib11Core2Impl26Api2 lib11core2impl26api2;
        lib11core2impl26api2.doSomething();
        Lib11Core2Impl26Api3 lib11core2impl26api3;
        lib11core2impl26api3.doSomething();
        visited = 1;
    }
}

