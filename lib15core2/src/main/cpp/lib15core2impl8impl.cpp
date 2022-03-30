// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl8impl4(int a, int b) {
    return a + b;
}

int Lib15Core2Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl8Impl" << std::endl;
        Lib15Core2Impl8Core1 lib15core2impl8core1;
        lib15core2impl8core1.doSomething();
        Lib15Core2Impl8Core2 lib15core2impl8core2;
        lib15core2impl8core2.doSomething();
        Lib15Core2Impl9Api1 lib15core2impl9api1;
        lib15core2impl9api1.doSomething();
        Lib15Core2Impl9Api2 lib15core2impl9api2;
        lib15core2impl9api2.doSomething();
        Lib15Core2Impl9Api3 lib15core2impl9api3;
        lib15core2impl9api3.doSomething();
        visited = 1;
    }
}

