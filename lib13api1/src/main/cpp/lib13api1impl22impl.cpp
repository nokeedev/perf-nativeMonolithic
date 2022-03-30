// GENERATED SOURCE FILE

#include "lib13api1_private.h"
#include "lib13api1_impl.h"
#include "lib14api1.h"
#include "lib13impl.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api1impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl22impl4(int a, int b) {
    return a + b;
}

int Lib13Api1Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl22Impl" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl22Core1 lib13api1impl22core1;
        lib13api1impl22core1.doSomething();
        Lib13Api1Impl22Core2 lib13api1impl22core2;
        lib13api1impl22core2.doSomething();
        Lib13Api1Impl23Api1 lib13api1impl23api1;
        lib13api1impl23api1.doSomething();
        Lib13Api1Impl23Api2 lib13api1impl23api2;
        lib13api1impl23api2.doSomething();
        Lib13Api1Impl23Api3 lib13api1impl23api3;
        lib13api1impl23api3.doSomething();
        visited = 1;
    }
}

