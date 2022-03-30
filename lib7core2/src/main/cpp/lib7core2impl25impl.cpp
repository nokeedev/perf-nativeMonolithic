// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib7Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl25Impl" << std::endl;
        Lib7Core2Impl25Core1 lib7core2impl25core1;
        lib7core2impl25core1.doSomething();
        Lib7Core2Impl25Core2 lib7core2impl25core2;
        lib7core2impl25core2.doSomething();
        Lib7Core2Impl26Api1 lib7core2impl26api1;
        lib7core2impl26api1.doSomething();
        Lib7Core2Impl26Api2 lib7core2impl26api2;
        lib7core2impl26api2.doSomething();
        Lib7Core2Impl26Api3 lib7core2impl26api3;
        lib7core2impl26api3.doSomething();
        visited = 1;
    }
}

