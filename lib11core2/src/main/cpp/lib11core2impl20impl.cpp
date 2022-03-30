// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl20impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl20Impl" << std::endl;
        Lib11Core2Impl20Core1 lib11core2impl20core1;
        lib11core2impl20core1.doSomething();
        Lib11Core2Impl20Core2 lib11core2impl20core2;
        lib11core2impl20core2.doSomething();
        Lib11Core2Impl21Api1 lib11core2impl21api1;
        lib11core2impl21api1.doSomething();
        Lib11Core2Impl21Api2 lib11core2impl21api2;
        lib11core2impl21api2.doSomething();
        Lib11Core2Impl21Api3 lib11core2impl21api3;
        lib11core2impl21api3.doSomething();
        visited = 1;
    }
}

