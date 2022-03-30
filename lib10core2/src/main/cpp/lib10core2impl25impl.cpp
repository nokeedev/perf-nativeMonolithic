// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl25Impl" << std::endl;
        Lib10Core2Impl25Core1 lib10core2impl25core1;
        lib10core2impl25core1.doSomething();
        Lib10Core2Impl25Core2 lib10core2impl25core2;
        lib10core2impl25core2.doSomething();
        Lib10Core2Impl26Api1 lib10core2impl26api1;
        lib10core2impl26api1.doSomething();
        Lib10Core2Impl26Api2 lib10core2impl26api2;
        lib10core2impl26api2.doSomething();
        Lib10Core2Impl26Api3 lib10core2impl26api3;
        lib10core2impl26api3.doSomething();
        visited = 1;
    }
}

