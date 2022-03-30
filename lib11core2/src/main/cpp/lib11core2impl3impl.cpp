// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl3impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl3Impl" << std::endl;
        Lib11Core2Impl3Core1 lib11core2impl3core1;
        lib11core2impl3core1.doSomething();
        Lib11Core2Impl3Core2 lib11core2impl3core2;
        lib11core2impl3core2.doSomething();
        Lib11Core2Impl4Api1 lib11core2impl4api1;
        lib11core2impl4api1.doSomething();
        Lib11Core2Impl4Api2 lib11core2impl4api2;
        lib11core2impl4api2.doSomething();
        Lib11Core2Impl4Api3 lib11core2impl4api3;
        lib11core2impl4api3.doSomething();
        visited = 1;
    }
}

