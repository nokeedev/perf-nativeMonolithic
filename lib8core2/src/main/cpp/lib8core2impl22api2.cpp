// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl22api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl22Api2" << std::endl;
        Lib8Core2Impl22Impl lib8core2impl22impl;
        lib8core2impl22impl.doSomething();
        Lib8Core2Impl23Api1 lib8core2impl23api1;
        lib8core2impl23api1.doSomething();
        Lib8Core2Impl23Api2 lib8core2impl23api2;
        lib8core2impl23api2.doSomething();
        Lib8Core2Impl23Api3 lib8core2impl23api3;
        lib8core2impl23api3.doSomething();
        visited = 1;
    }
}

