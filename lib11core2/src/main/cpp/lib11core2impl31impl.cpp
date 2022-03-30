// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl31impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl31Impl" << std::endl;
        Lib11Core2Impl31Core1 lib11core2impl31core1;
        lib11core2impl31core1.doSomething();
        Lib11Core2Impl31Core2 lib11core2impl31core2;
        lib11core2impl31core2.doSomething();
        Lib11Core2Impl32Api1 lib11core2impl32api1;
        lib11core2impl32api1.doSomething();
        Lib11Core2Impl32Api2 lib11core2impl32api2;
        lib11core2impl32api2.doSomething();
        Lib11Core2Impl32Api3 lib11core2impl32api3;
        lib11core2impl32api3.doSomething();
        visited = 1;
    }
}

