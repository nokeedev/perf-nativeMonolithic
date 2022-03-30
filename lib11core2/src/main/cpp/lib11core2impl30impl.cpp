// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl30Impl" << std::endl;
        Lib11Core2Impl30Core1 lib11core2impl30core1;
        lib11core2impl30core1.doSomething();
        Lib11Core2Impl30Core2 lib11core2impl30core2;
        lib11core2impl30core2.doSomething();
        Lib11Core2Impl31Api1 lib11core2impl31api1;
        lib11core2impl31api1.doSomething();
        Lib11Core2Impl31Api2 lib11core2impl31api2;
        lib11core2impl31api2.doSomething();
        Lib11Core2Impl31Api3 lib11core2impl31api3;
        lib11core2impl31api3.doSomething();
        visited = 1;
    }
}

