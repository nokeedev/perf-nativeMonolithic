// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl7impl4(int a, int b) {
    return a + b;
}

int Lib8Core2Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl7Impl" << std::endl;
        Lib8Core2Impl7Core1 lib8core2impl7core1;
        lib8core2impl7core1.doSomething();
        Lib8Core2Impl7Core2 lib8core2impl7core2;
        lib8core2impl7core2.doSomething();
        Lib8Core2Impl8Api1 lib8core2impl8api1;
        lib8core2impl8api1.doSomething();
        Lib8Core2Impl8Api2 lib8core2impl8api2;
        lib8core2impl8api2.doSomething();
        Lib8Core2Impl8Api3 lib8core2impl8api3;
        lib8core2impl8api3.doSomething();
        visited = 1;
    }
}

