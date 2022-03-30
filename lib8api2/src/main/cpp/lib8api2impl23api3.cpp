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
int lib8api2impl23api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl23api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl23api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl23api34(int a, int b) {
    return a + b;
}

int Lib8Api2Impl23Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl23Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl23Api3" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl23Impl lib8api2impl23impl;
        lib8api2impl23impl.doSomething();
        Lib8Api2Impl24Api1 lib8api2impl24api1;
        lib8api2impl24api1.doSomething();
        Lib8Api2Impl24Api2 lib8api2impl24api2;
        lib8api2impl24api2.doSomething();
        Lib8Api2Impl24Api3 lib8api2impl24api3;
        lib8api2impl24api3.doSomething();
        visited = 1;
    }
}

