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
int lib3api3impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl15impl4(int a, int b) {
    return a + b;
}

int Lib3Api3Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl15Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl15Core1 lib3api3impl15core1;
        lib3api3impl15core1.doSomething();
        Lib3Api3Impl15Core2 lib3api3impl15core2;
        lib3api3impl15core2.doSomething();
        Lib3Api3Impl16Api1 lib3api3impl16api1;
        lib3api3impl16api1.doSomething();
        Lib3Api3Impl16Api2 lib3api3impl16api2;
        lib3api3impl16api2.doSomething();
        Lib3Api3Impl16Api3 lib3api3impl16api3;
        lib3api3impl16api3.doSomething();
        visited = 1;
    }
}

