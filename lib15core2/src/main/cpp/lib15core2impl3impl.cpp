// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl3impl4(int a, int b) {
    return a + b;
}

int Lib15Core2Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl3Impl" << std::endl;
        Lib15Core2Impl3Core1 lib15core2impl3core1;
        lib15core2impl3core1.doSomething();
        Lib15Core2Impl3Core2 lib15core2impl3core2;
        lib15core2impl3core2.doSomething();
        Lib15Core2Impl4Api1 lib15core2impl4api1;
        lib15core2impl4api1.doSomething();
        Lib15Core2Impl4Api2 lib15core2impl4api2;
        lib15core2impl4api2.doSomething();
        Lib15Core2Impl4Api3 lib15core2impl4api3;
        lib15core2impl4api3.doSomething();
        visited = 1;
    }
}

