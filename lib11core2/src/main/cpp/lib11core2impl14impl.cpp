// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl14impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl14Impl" << std::endl;
        Lib11Core2Impl14Core1 lib11core2impl14core1;
        lib11core2impl14core1.doSomething();
        Lib11Core2Impl14Core2 lib11core2impl14core2;
        lib11core2impl14core2.doSomething();
        Lib11Core2Impl15Api1 lib11core2impl15api1;
        lib11core2impl15api1.doSomething();
        Lib11Core2Impl15Api2 lib11core2impl15api2;
        lib11core2impl15api2.doSomething();
        Lib11Core2Impl15Api3 lib11core2impl15api3;
        lib11core2impl15api3.doSomething();
        visited = 1;
    }
}

