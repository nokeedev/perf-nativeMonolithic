// GENERATED SOURCE FILE

#include "lib8api1_private.h"
#include "lib8api1_impl.h"
#include "lib9api1.h"
#include "lib8impl.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api1impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl22impl4(int a, int b) {
    return a + b;
}

int Lib8Api1Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl22Impl" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl22Core1 lib8api1impl22core1;
        lib8api1impl22core1.doSomething();
        Lib8Api1Impl22Core2 lib8api1impl22core2;
        lib8api1impl22core2.doSomething();
        Lib8Api1Impl23Api1 lib8api1impl23api1;
        lib8api1impl23api1.doSomething();
        Lib8Api1Impl23Api2 lib8api1impl23api2;
        lib8api1impl23api2.doSomething();
        Lib8Api1Impl23Api3 lib8api1impl23api3;
        lib8api1impl23api3.doSomething();
        visited = 1;
    }
}

