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
int lib3api1impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl6impl4(int a, int b) {
    return a + b;
}

int Lib3Api1Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl6Impl" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl6Core1 lib3api1impl6core1;
        lib3api1impl6core1.doSomething();
        Lib3Api1Impl6Core2 lib3api1impl6core2;
        lib3api1impl6core2.doSomething();
        Lib3Api1Impl7Api1 lib3api1impl7api1;
        lib3api1impl7api1.doSomething();
        Lib3Api1Impl7Api2 lib3api1impl7api2;
        lib3api1impl7api2.doSomething();
        Lib3Api1Impl7Api3 lib3api1impl7api3;
        lib3api1impl7api3.doSomething();
        visited = 1;
    }
}

