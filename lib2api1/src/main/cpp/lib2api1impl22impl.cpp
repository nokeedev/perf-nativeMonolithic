// GENERATED SOURCE FILE

#include "lib2api1_private.h"
#include "lib2api1_impl.h"
#include "lib3api1.h"
#include "lib2impl.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api1impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl22impl4(int a, int b) {
    return a + b;
}

int Lib2Api1Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl22Impl" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl22Core1 lib2api1impl22core1;
        lib2api1impl22core1.doSomething();
        Lib2Api1Impl22Core2 lib2api1impl22core2;
        lib2api1impl22core2.doSomething();
        Lib2Api1Impl23Api1 lib2api1impl23api1;
        lib2api1impl23api1.doSomething();
        Lib2Api1Impl23Api2 lib2api1impl23api2;
        lib2api1impl23api2.doSomething();
        Lib2Api1Impl23Api3 lib2api1impl23api3;
        lib2api1impl23api3.doSomething();
        visited = 1;
    }
}

