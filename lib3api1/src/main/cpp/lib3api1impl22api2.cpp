// GENERATED SOURCE FILE

#include "lib3api1_private.h"
#include "lib3api1_impl.h"
#include "lib4api1.h"
#include "lib3impl.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api1impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl22api24(int a, int b) {
    return a + b;
}

int Lib3Api1Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl22Api2" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl22Impl lib3api1impl22impl;
        lib3api1impl22impl.doSomething();
        Lib3Api1Impl23Api1 lib3api1impl23api1;
        lib3api1impl23api1.doSomething();
        Lib3Api1Impl23Api2 lib3api1impl23api2;
        lib3api1impl23api2.doSomething();
        Lib3Api1Impl23Api3 lib3api1impl23api3;
        lib3api1impl23api3.doSomething();
        visited = 1;
    }
}

