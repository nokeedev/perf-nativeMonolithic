// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl22api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl22Api2" << std::endl;
        Lib7Core2Impl22Impl lib7core2impl22impl;
        lib7core2impl22impl.doSomething();
        Lib7Core2Impl23Api1 lib7core2impl23api1;
        lib7core2impl23api1.doSomething();
        Lib7Core2Impl23Api2 lib7core2impl23api2;
        lib7core2impl23api2.doSomething();
        Lib7Core2Impl23Api3 lib7core2impl23api3;
        lib7core2impl23api3.doSomething();
        visited = 1;
    }
}

