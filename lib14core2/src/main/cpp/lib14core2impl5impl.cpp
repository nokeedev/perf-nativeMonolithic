// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl5impl4(int a, int b) {
    return a + b;
}

int Lib14Core2Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl5Impl" << std::endl;
        Lib14Core2Impl5Core1 lib14core2impl5core1;
        lib14core2impl5core1.doSomething();
        Lib14Core2Impl5Core2 lib14core2impl5core2;
        lib14core2impl5core2.doSomething();
        Lib14Core2Impl6Api1 lib14core2impl6api1;
        lib14core2impl6api1.doSomething();
        Lib14Core2Impl6Api2 lib14core2impl6api2;
        lib14core2impl6api2.doSomething();
        Lib14Core2Impl6Api3 lib14core2impl6api3;
        lib14core2impl6api3.doSomething();
        visited = 1;
    }
}

