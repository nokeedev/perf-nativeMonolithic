// GENERATED SOURCE FILE

#include "lib2api1_private.h"
#include "lib2api1_impl.h"
#include "lib3api1.h"
#include "lib2impl.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api1impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl15impl4(int a, int b) {
    return a + b;
}

int Lib2Api1Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl15Impl" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl15Core1 lib2api1impl15core1;
        lib2api1impl15core1.doSomething();
        Lib2Api1Impl15Core2 lib2api1impl15core2;
        lib2api1impl15core2.doSomething();
        Lib2Api1Impl16Api1 lib2api1impl16api1;
        lib2api1impl16api1.doSomething();
        Lib2Api1Impl16Api2 lib2api1impl16api2;
        lib2api1impl16api2.doSomething();
        Lib2Api1Impl16Api3 lib2api1impl16api3;
        lib2api1impl16api3.doSomething();
        visited = 1;
    }
}

