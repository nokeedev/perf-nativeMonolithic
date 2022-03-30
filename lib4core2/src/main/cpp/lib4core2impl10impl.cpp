// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl10impl4(int a, int b) {
    return a + b;
}

int Lib4Core2Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl10Impl" << std::endl;
        Lib4Core2Impl10Core1 lib4core2impl10core1;
        lib4core2impl10core1.doSomething();
        Lib4Core2Impl10Core2 lib4core2impl10core2;
        lib4core2impl10core2.doSomething();
        Lib4Core2Impl11Api1 lib4core2impl11api1;
        lib4core2impl11api1.doSomething();
        Lib4Core2Impl11Api2 lib4core2impl11api2;
        lib4core2impl11api2.doSomething();
        Lib4Core2Impl11Api3 lib4core2impl11api3;
        lib4core2impl11api3.doSomething();
        visited = 1;
    }
}

