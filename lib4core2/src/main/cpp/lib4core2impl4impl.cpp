// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl4impl4(int a, int b) {
    return a + b;
}

int Lib4Core2Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl4Impl" << std::endl;
        Lib4Core2Impl4Core1 lib4core2impl4core1;
        lib4core2impl4core1.doSomething();
        Lib4Core2Impl4Core2 lib4core2impl4core2;
        lib4core2impl4core2.doSomething();
        Lib4Core2Impl5Api1 lib4core2impl5api1;
        lib4core2impl5api1.doSomething();
        Lib4Core2Impl5Api2 lib4core2impl5api2;
        lib4core2impl5api2.doSomething();
        Lib4Core2Impl5Api3 lib4core2impl5api3;
        lib4core2impl5api3.doSomething();
        visited = 1;
    }
}

