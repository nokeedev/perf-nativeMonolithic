// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl18api34(int a, int b) {
    return a + b;
}

int Lib8Core2Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl18Api3" << std::endl;
        Lib8Core2Impl18Impl lib8core2impl18impl;
        lib8core2impl18impl.doSomething();
        Lib8Core2Impl19Api1 lib8core2impl19api1;
        lib8core2impl19api1.doSomething();
        Lib8Core2Impl19Api2 lib8core2impl19api2;
        lib8core2impl19api2.doSomething();
        Lib8Core2Impl19Api3 lib8core2impl19api3;
        lib8core2impl19api3.doSomething();
        visited = 1;
    }
}

