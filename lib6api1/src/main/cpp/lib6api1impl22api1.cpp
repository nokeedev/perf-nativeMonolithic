// GENERATED SOURCE FILE

#include "lib6api1_private.h"
#include "lib6api1_impl.h"
#include "lib7api1.h"
#include "lib6impl.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api1impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl22api14(int a, int b) {
    return a + b;
}

int Lib6Api1Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl22Api1" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl23Api1 lib6api1impl23api1;
        lib6api1impl23api1.doSomething();
        Lib6Api1Impl22Impl lib6api1impl22impl;
        lib6api1impl22impl.doSomething();
        Lib6Api1Impl23Api2 lib6api1impl23api2;
        lib6api1impl23api2.doSomething();
        Lib6Api1Impl23Api3 lib6api1impl23api3;
        lib6api1impl23api3.doSomething();
        visited = 1;
    }
}

