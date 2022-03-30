// GENERATED SOURCE FILE

#include "lib12core2_private.h"
#include "lib12core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core2impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core2impl22api14(int a, int b) {
    return a + b;
}

int Lib12Core2Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core2Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core2Impl22Api1" << std::endl;
        Lib12Core2Impl23Api1 lib12core2impl23api1;
        lib12core2impl23api1.doSomething();
        Lib12Core2Impl22Impl lib12core2impl22impl;
        lib12core2impl22impl.doSomething();
        Lib12Core2Impl23Api2 lib12core2impl23api2;
        lib12core2impl23api2.doSomething();
        Lib12Core2Impl23Api3 lib12core2impl23api3;
        lib12core2impl23api3.doSomething();
        visited = 1;
    }
}

