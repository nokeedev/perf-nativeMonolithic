// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl7impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl7Impl" << std::endl;
        Lib10Core2Impl7Core1 lib10core2impl7core1;
        lib10core2impl7core1.doSomething();
        Lib10Core2Impl7Core2 lib10core2impl7core2;
        lib10core2impl7core2.doSomething();
        Lib10Core2Impl8Api1 lib10core2impl8api1;
        lib10core2impl8api1.doSomething();
        Lib10Core2Impl8Api2 lib10core2impl8api2;
        lib10core2impl8api2.doSomething();
        Lib10Core2Impl8Api3 lib10core2impl8api3;
        lib10core2impl8api3.doSomething();
        visited = 1;
    }
}

