// GENERATED SOURCE FILE

#include "lib3api3_private.h"
#include "lib3api3_impl.h"
#include "lib3impl.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api3impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl22api14(int a, int b) {
    return a + b;
}

int Lib3Api3Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl22Api1" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl23Api1 lib3api3impl23api1;
        lib3api3impl23api1.doSomething();
        Lib3Api3Impl22Impl lib3api3impl22impl;
        lib3api3impl22impl.doSomething();
        Lib3Api3Impl23Api2 lib3api3impl23api2;
        lib3api3impl23api2.doSomething();
        Lib3Api3Impl23Api3 lib3api3impl23api3;
        lib3api3impl23api3.doSomething();
        visited = 1;
    }
}
