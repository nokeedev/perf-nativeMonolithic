// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl31impl4(int a, int b) {
    return a + b;
}

int Lib4Core2Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl31Impl" << std::endl;
        Lib4Core2Impl31Core1 lib4core2impl31core1;
        lib4core2impl31core1.doSomething();
        Lib4Core2Impl31Core2 lib4core2impl31core2;
        lib4core2impl31core2.doSomething();
        Lib4Core2Impl32Api1 lib4core2impl32api1;
        lib4core2impl32api1.doSomething();
        Lib4Core2Impl32Api2 lib4core2impl32api2;
        lib4core2impl32api2.doSomething();
        Lib4Core2Impl32Api3 lib4core2impl32api3;
        lib4core2impl32api3.doSomething();
        visited = 1;
    }
}

