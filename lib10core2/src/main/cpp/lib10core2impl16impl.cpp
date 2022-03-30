// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl16impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl16Impl" << std::endl;
        Lib10Core2Impl16Core1 lib10core2impl16core1;
        lib10core2impl16core1.doSomething();
        Lib10Core2Impl16Core2 lib10core2impl16core2;
        lib10core2impl16core2.doSomething();
        Lib10Core2Impl17Api1 lib10core2impl17api1;
        lib10core2impl17api1.doSomething();
        Lib10Core2Impl17Api2 lib10core2impl17api2;
        lib10core2impl17api2.doSomething();
        Lib10Core2Impl17Api3 lib10core2impl17api3;
        lib10core2impl17api3.doSomething();
        visited = 1;
    }
}

