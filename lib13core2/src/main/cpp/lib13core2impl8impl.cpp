// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl8impl4(int a, int b) {
    return a + b;
}

int Lib13Core2Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl8Impl" << std::endl;
        Lib13Core2Impl8Core1 lib13core2impl8core1;
        lib13core2impl8core1.doSomething();
        Lib13Core2Impl8Core2 lib13core2impl8core2;
        lib13core2impl8core2.doSomething();
        Lib13Core2Impl9Api1 lib13core2impl9api1;
        lib13core2impl9api1.doSomething();
        Lib13Core2Impl9Api2 lib13core2impl9api2;
        lib13core2impl9api2.doSomething();
        Lib13Core2Impl9Api3 lib13core2impl9api3;
        lib13core2impl9api3.doSomething();
        visited = 1;
    }
}

