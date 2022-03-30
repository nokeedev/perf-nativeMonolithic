// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl22api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl22api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl22api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl22api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl22Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl22Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl22Api3" << std::endl;
        Lib13Core2Impl22Impl lib13core2impl22impl;
        lib13core2impl22impl.doSomething();
        Lib13Core2Impl23Api1 lib13core2impl23api1;
        lib13core2impl23api1.doSomething();
        Lib13Core2Impl23Api2 lib13core2impl23api2;
        lib13core2impl23api2.doSomething();
        Lib13Core2Impl23Api3 lib13core2impl23api3;
        lib13core2impl23api3.doSomething();
        visited = 1;
    }
}

