// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl10impl4(int a, int b) {
    return a + b;
}

int Lib16Core2Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl10Impl" << std::endl;
        Lib16Core2Impl10Core1 lib16core2impl10core1;
        lib16core2impl10core1.doSomething();
        Lib16Core2Impl10Core2 lib16core2impl10core2;
        lib16core2impl10core2.doSomething();
        Lib16Core2Impl11Api1 lib16core2impl11api1;
        lib16core2impl11api1.doSomething();
        Lib16Core2Impl11Api2 lib16core2impl11api2;
        lib16core2impl11api2.doSomething();
        Lib16Core2Impl11Api3 lib16core2impl11api3;
        lib16core2impl11api3.doSomething();
        visited = 1;
    }
}

