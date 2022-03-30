// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl10impl4(int a, int b) {
    return a + b;
}

int Lib8Core2Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl10Impl" << std::endl;
        Lib8Core2Impl10Core1 lib8core2impl10core1;
        lib8core2impl10core1.doSomething();
        Lib8Core2Impl10Core2 lib8core2impl10core2;
        lib8core2impl10core2.doSomething();
        Lib8Core2Impl11Api1 lib8core2impl11api1;
        lib8core2impl11api1.doSomething();
        Lib8Core2Impl11Api2 lib8core2impl11api2;
        lib8core2impl11api2.doSomething();
        Lib8Core2Impl11Api3 lib8core2impl11api3;
        lib8core2impl11api3.doSomething();
        visited = 1;
    }
}

