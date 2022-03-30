// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl19impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl19Impl" << std::endl;
        Lib11Core2Impl19Core1 lib11core2impl19core1;
        lib11core2impl19core1.doSomething();
        Lib11Core2Impl19Core2 lib11core2impl19core2;
        lib11core2impl19core2.doSomething();
        Lib11Core2Impl20Api1 lib11core2impl20api1;
        lib11core2impl20api1.doSomething();
        Lib11Core2Impl20Api2 lib11core2impl20api2;
        lib11core2impl20api2.doSomething();
        Lib11Core2Impl20Api3 lib11core2impl20api3;
        lib11core2impl20api3.doSomething();
        visited = 1;
    }
}

