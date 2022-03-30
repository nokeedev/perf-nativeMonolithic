// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl1impl4(int a, int b) {
    return a + b;
}

int Lib16Core2Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl1Impl" << std::endl;
        Lib16Core2Impl1Core1 lib16core2impl1core1;
        lib16core2impl1core1.doSomething();
        Lib16Core2Impl1Core2 lib16core2impl1core2;
        lib16core2impl1core2.doSomething();
        Lib16Core2Impl2Api1 lib16core2impl2api1;
        lib16core2impl2api1.doSomething();
        Lib16Core2Impl2Api2 lib16core2impl2api2;
        lib16core2impl2api2.doSomething();
        Lib16Core2Impl2Api3 lib16core2impl2api3;
        lib16core2impl2api3.doSomething();
        visited = 1;
    }
}

