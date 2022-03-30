// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl22api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl22Api2" << std::endl;
        Lib3Core2Impl22Impl lib3core2impl22impl;
        lib3core2impl22impl.doSomething();
        Lib3Core2Impl23Api1 lib3core2impl23api1;
        lib3core2impl23api1.doSomething();
        Lib3Core2Impl23Api2 lib3core2impl23api2;
        lib3core2impl23api2.doSomething();
        Lib3Core2Impl23Api3 lib3core2impl23api3;
        lib3core2impl23api3.doSomething();
        visited = 1;
    }
}

