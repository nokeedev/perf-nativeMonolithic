// GENERATED SOURCE FILE

#include "lib2api3_private.h"
#include "lib2api3_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api3impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl22impl4(int a, int b) {
    return a + b;
}

int Lib2Api3Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3Impl22Impl" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api3Impl22Core1 lib2api3impl22core1;
        lib2api3impl22core1.doSomething();
        Lib2Api3Impl22Core2 lib2api3impl22core2;
        lib2api3impl22core2.doSomething();
        Lib2Api3Impl23Api1 lib2api3impl23api1;
        lib2api3impl23api1.doSomething();
        Lib2Api3Impl23Api2 lib2api3impl23api2;
        lib2api3impl23api2.doSomething();
        Lib2Api3Impl23Api3 lib2api3impl23api3;
        lib2api3impl23api3.doSomething();
        visited = 1;
    }
}

