// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl15impl4(int a, int b) {
    return a + b;
}

int Lib14Core2Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl15Impl" << std::endl;
        Lib14Core2Impl15Core1 lib14core2impl15core1;
        lib14core2impl15core1.doSomething();
        Lib14Core2Impl15Core2 lib14core2impl15core2;
        lib14core2impl15core2.doSomething();
        Lib14Core2Impl16Api1 lib14core2impl16api1;
        lib14core2impl16api1.doSomething();
        Lib14Core2Impl16Api2 lib14core2impl16api2;
        lib14core2impl16api2.doSomething();
        Lib14Core2Impl16Api3 lib14core2impl16api3;
        lib14core2impl16api3.doSomething();
        visited = 1;
    }
}

