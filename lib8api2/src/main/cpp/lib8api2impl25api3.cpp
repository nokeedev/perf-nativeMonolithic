// GENERATED SOURCE FILE

#include "lib8api2_private.h"
#include "lib8api2_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api2impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl25api34(int a, int b) {
    return a + b;
}

int Lib8Api2Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl25Api3" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl25Impl lib8api2impl25impl;
        lib8api2impl25impl.doSomething();
        Lib8Api2Impl26Api1 lib8api2impl26api1;
        lib8api2impl26api1.doSomething();
        Lib8Api2Impl26Api2 lib8api2impl26api2;
        lib8api2impl26api2.doSomething();
        Lib8Api2Impl26Api3 lib8api2impl26api3;
        lib8api2impl26api3.doSomething();
        visited = 1;
    }
}

