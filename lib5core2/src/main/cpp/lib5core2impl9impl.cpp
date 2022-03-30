// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl9impl4(int a, int b) {
    return a + b;
}

int Lib5Core2Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl9Impl" << std::endl;
        Lib5Core2Impl9Core1 lib5core2impl9core1;
        lib5core2impl9core1.doSomething();
        Lib5Core2Impl9Core2 lib5core2impl9core2;
        lib5core2impl9core2.doSomething();
        Lib5Core2Impl10Api1 lib5core2impl10api1;
        lib5core2impl10api1.doSomething();
        Lib5Core2Impl10Api2 lib5core2impl10api2;
        lib5core2impl10api2.doSomething();
        Lib5Core2Impl10Api3 lib5core2impl10api3;
        lib5core2impl10api3.doSomething();
        visited = 1;
    }
}

