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
int lib3api3impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl13impl4(int a, int b) {
    return a + b;
}

int Lib3Api3Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl13Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl13Core1 lib3api3impl13core1;
        lib3api3impl13core1.doSomething();
        Lib3Api3Impl13Core2 lib3api3impl13core2;
        lib3api3impl13core2.doSomething();
        Lib3Api3Impl14Api1 lib3api3impl14api1;
        lib3api3impl14api1.doSomething();
        Lib3Api3Impl14Api2 lib3api3impl14api2;
        lib3api3impl14api2.doSomething();
        Lib3Api3Impl14Api3 lib3api3impl14api3;
        lib3api3impl14api3.doSomething();
        visited = 1;
    }
}

