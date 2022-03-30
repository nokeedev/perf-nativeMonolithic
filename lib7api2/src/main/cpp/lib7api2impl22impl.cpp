// GENERATED SOURCE FILE

#include "lib7api2_private.h"
#include "lib7api2_impl.h"
#include "lib7impl.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api2impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl22impl4(int a, int b) {
    return a + b;
}

int Lib7Api2Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl22Impl" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl22Core1 lib7api2impl22core1;
        lib7api2impl22core1.doSomething();
        Lib7Api2Impl22Core2 lib7api2impl22core2;
        lib7api2impl22core2.doSomething();
        Lib7Api2Impl23Api1 lib7api2impl23api1;
        lib7api2impl23api1.doSomething();
        Lib7Api2Impl23Api2 lib7api2impl23api2;
        lib7api2impl23api2.doSomething();
        Lib7Api2Impl23Api3 lib7api2impl23api3;
        lib7api2impl23api3.doSomething();
        visited = 1;
    }
}

