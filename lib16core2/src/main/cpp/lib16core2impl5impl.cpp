// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl5impl4(int a, int b) {
    return a + b;
}

int Lib16Core2Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl5Impl" << std::endl;
        Lib16Core2Impl5Core1 lib16core2impl5core1;
        lib16core2impl5core1.doSomething();
        Lib16Core2Impl5Core2 lib16core2impl5core2;
        lib16core2impl5core2.doSomething();
        Lib16Core2Impl6Api1 lib16core2impl6api1;
        lib16core2impl6api1.doSomething();
        Lib16Core2Impl6Api2 lib16core2impl6api2;
        lib16core2impl6api2.doSomething();
        Lib16Core2Impl6Api3 lib16core2impl6api3;
        lib16core2impl6api3.doSomething();
        visited = 1;
    }
}

