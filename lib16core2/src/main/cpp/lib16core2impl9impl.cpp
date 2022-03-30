// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl9impl4(int a, int b) {
    return a + b;
}

int Lib16Core2Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl9Impl" << std::endl;
        Lib16Core2Impl9Core1 lib16core2impl9core1;
        lib16core2impl9core1.doSomething();
        Lib16Core2Impl9Core2 lib16core2impl9core2;
        lib16core2impl9core2.doSomething();
        Lib16Core2Impl10Api1 lib16core2impl10api1;
        lib16core2impl10api1.doSomething();
        Lib16Core2Impl10Api2 lib16core2impl10api2;
        lib16core2impl10api2.doSomething();
        Lib16Core2Impl10Api3 lib16core2impl10api3;
        lib16core2impl10api3.doSomething();
        visited = 1;
    }
}

