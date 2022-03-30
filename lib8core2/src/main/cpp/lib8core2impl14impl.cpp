// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl14impl4(int a, int b) {
    return a + b;
}

int Lib8Core2Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl14Impl" << std::endl;
        Lib8Core2Impl14Core1 lib8core2impl14core1;
        lib8core2impl14core1.doSomething();
        Lib8Core2Impl14Core2 lib8core2impl14core2;
        lib8core2impl14core2.doSomething();
        Lib8Core2Impl15Api1 lib8core2impl15api1;
        lib8core2impl15api1.doSomething();
        Lib8Core2Impl15Api2 lib8core2impl15api2;
        lib8core2impl15api2.doSomething();
        Lib8Core2Impl15Api3 lib8core2impl15api3;
        lib8core2impl15api3.doSomething();
        visited = 1;
    }
}

