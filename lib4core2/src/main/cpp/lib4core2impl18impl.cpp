// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl18impl4(int a, int b) {
    return a + b;
}

int Lib4Core2Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl18Impl" << std::endl;
        Lib4Core2Impl18Core1 lib4core2impl18core1;
        lib4core2impl18core1.doSomething();
        Lib4Core2Impl18Core2 lib4core2impl18core2;
        lib4core2impl18core2.doSomething();
        Lib4Core2Impl19Api1 lib4core2impl19api1;
        lib4core2impl19api1.doSomething();
        Lib4Core2Impl19Api2 lib4core2impl19api2;
        lib4core2impl19api2.doSomething();
        Lib4Core2Impl19Api3 lib4core2impl19api3;
        lib4core2impl19api3.doSomething();
        visited = 1;
    }
}

