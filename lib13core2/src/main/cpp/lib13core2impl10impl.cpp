// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl10impl4(int a, int b) {
    return a + b;
}

int Lib13Core2Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl10Impl" << std::endl;
        Lib13Core2Impl10Core1 lib13core2impl10core1;
        lib13core2impl10core1.doSomething();
        Lib13Core2Impl10Core2 lib13core2impl10core2;
        lib13core2impl10core2.doSomething();
        Lib13Core2Impl11Api1 lib13core2impl11api1;
        lib13core2impl11api1.doSomething();
        Lib13Core2Impl11Api2 lib13core2impl11api2;
        lib13core2impl11api2.doSomething();
        Lib13Core2Impl11Api3 lib13core2impl11api3;
        lib13core2impl11api3.doSomething();
        visited = 1;
    }
}

