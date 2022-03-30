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
int lib4api1impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl22api14(int a, int b) {
    return a + b;
}

int Lib4Api1Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl22Api1" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl23Api1 lib4api1impl23api1;
        lib4api1impl23api1.doSomething();
        Lib4Api1Impl22Impl lib4api1impl22impl;
        lib4api1impl22impl.doSomething();
        Lib4Api1Impl23Api2 lib4api1impl23api2;
        lib4api1impl23api2.doSomething();
        Lib4Api1Impl23Api3 lib4api1impl23api3;
        lib4api1impl23api3.doSomething();
        visited = 1;
    }
}

