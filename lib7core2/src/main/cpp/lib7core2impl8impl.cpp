// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl8impl4(int a, int b) {
    return a + b;
}

int Lib7Core2Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl8Impl" << std::endl;
        Lib7Core2Impl8Core1 lib7core2impl8core1;
        lib7core2impl8core1.doSomething();
        Lib7Core2Impl8Core2 lib7core2impl8core2;
        lib7core2impl8core2.doSomething();
        Lib7Core2Impl9Api1 lib7core2impl9api1;
        lib7core2impl9api1.doSomething();
        Lib7Core2Impl9Api2 lib7core2impl9api2;
        lib7core2impl9api2.doSomething();
        Lib7Core2Impl9Api3 lib7core2impl9api3;
        lib7core2impl9api3.doSomething();
        visited = 1;
    }
}

