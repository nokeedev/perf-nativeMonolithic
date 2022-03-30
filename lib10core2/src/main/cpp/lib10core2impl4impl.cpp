// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl4impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl4Impl" << std::endl;
        Lib10Core2Impl4Core1 lib10core2impl4core1;
        lib10core2impl4core1.doSomething();
        Lib10Core2Impl4Core2 lib10core2impl4core2;
        lib10core2impl4core2.doSomething();
        Lib10Core2Impl5Api1 lib10core2impl5api1;
        lib10core2impl5api1.doSomething();
        Lib10Core2Impl5Api2 lib10core2impl5api2;
        lib10core2impl5api2.doSomething();
        Lib10Core2Impl5Api3 lib10core2impl5api3;
        lib10core2impl5api3.doSomething();
        visited = 1;
    }
}

