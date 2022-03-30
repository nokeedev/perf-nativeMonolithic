// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl14impl4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl14Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl14Core1 lib17api2impl14core1;
        lib17api2impl14core1.doSomething();
        Lib17Api2Impl14Core2 lib17api2impl14core2;
        lib17api2impl14core2.doSomething();
        Lib17Api2Impl15Api1 lib17api2impl15api1;
        lib17api2impl15api1.doSomething();
        Lib17Api2Impl15Api2 lib17api2impl15api2;
        lib17api2impl15api2.doSomething();
        Lib17Api2Impl15Api3 lib17api2impl15api3;
        lib17api2impl15api3.doSomething();
        visited = 1;
    }
}

