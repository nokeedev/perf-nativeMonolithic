// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl22api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl22api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl22api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl22api34(int a, int b) {
    return a + b;
}

int Lib4Core2Impl22Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl22Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl22Api3" << std::endl;
        Lib4Core2Impl22Impl lib4core2impl22impl;
        lib4core2impl22impl.doSomething();
        Lib4Core2Impl23Api1 lib4core2impl23api1;
        lib4core2impl23api1.doSomething();
        Lib4Core2Impl23Api2 lib4core2impl23api2;
        lib4core2impl23api2.doSomething();
        Lib4Core2Impl23Api3 lib4core2impl23api3;
        lib4core2impl23api3.doSomething();
        visited = 1;
    }
}

