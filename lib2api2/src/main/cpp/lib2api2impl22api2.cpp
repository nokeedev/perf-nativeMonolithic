// GENERATED SOURCE FILE

#include "lib2api2_private.h"
#include "lib2api2_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api2impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl22api24(int a, int b) {
    return a + b;
}

int Lib2Api2Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl22Api2" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl22Impl lib2api2impl22impl;
        lib2api2impl22impl.doSomething();
        Lib2Api2Impl23Api1 lib2api2impl23api1;
        lib2api2impl23api1.doSomething();
        Lib2Api2Impl23Api2 lib2api2impl23api2;
        lib2api2impl23api2.doSomething();
        Lib2Api2Impl23Api3 lib2api2impl23api3;
        lib2api2impl23api3.doSomething();
        visited = 1;
    }
}

