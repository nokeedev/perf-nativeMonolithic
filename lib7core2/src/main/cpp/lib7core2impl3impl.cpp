// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl3impl4(int a, int b) {
    return a + b;
}

int Lib7Core2Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl3Impl" << std::endl;
        Lib7Core2Impl3Core1 lib7core2impl3core1;
        lib7core2impl3core1.doSomething();
        Lib7Core2Impl3Core2 lib7core2impl3core2;
        lib7core2impl3core2.doSomething();
        Lib7Core2Impl4Api1 lib7core2impl4api1;
        lib7core2impl4api1.doSomething();
        Lib7Core2Impl4Api2 lib7core2impl4api2;
        lib7core2impl4api2.doSomething();
        Lib7Core2Impl4Api3 lib7core2impl4api3;
        lib7core2impl4api3.doSomething();
        visited = 1;
    }
}

