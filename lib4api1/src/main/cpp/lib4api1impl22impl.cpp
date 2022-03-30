// GENERATED SOURCE FILE

#include "lib4api1_private.h"
#include "lib4api1_impl.h"
#include "lib5api1.h"
#include "lib4impl.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api1impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl22impl4(int a, int b) {
    return a + b;
}

int Lib4Api1Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl22Impl" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl22Core1 lib4api1impl22core1;
        lib4api1impl22core1.doSomething();
        Lib4Api1Impl22Core2 lib4api1impl22core2;
        lib4api1impl22core2.doSomething();
        Lib4Api1Impl23Api1 lib4api1impl23api1;
        lib4api1impl23api1.doSomething();
        Lib4Api1Impl23Api2 lib4api1impl23api2;
        lib4api1impl23api2.doSomething();
        Lib4Api1Impl23Api3 lib4api1impl23api3;
        lib4api1impl23api3.doSomething();
        visited = 1;
    }
}

