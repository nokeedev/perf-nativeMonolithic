// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl18api34(int a, int b) {
    return a + b;
}

int Lib7Core2Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl18Api3" << std::endl;
        Lib7Core2Impl18Impl lib7core2impl18impl;
        lib7core2impl18impl.doSomething();
        Lib7Core2Impl19Api1 lib7core2impl19api1;
        lib7core2impl19api1.doSomething();
        Lib7Core2Impl19Api2 lib7core2impl19api2;
        lib7core2impl19api2.doSomething();
        Lib7Core2Impl19Api3 lib7core2impl19api3;
        lib7core2impl19api3.doSomething();
        visited = 1;
    }
}

