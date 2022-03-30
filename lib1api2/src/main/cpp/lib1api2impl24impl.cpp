// GENERATED SOURCE FILE

#include "lib1api2_private.h"
#include "lib1api2_impl.h"
#include "lib1impl.h"
#include "lib2api1.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api2impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl24impl4(int a, int b) {
    return a + b;
}

int Lib1Api2Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl24Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl24Core1 lib1api2impl24core1;
        lib1api2impl24core1.doSomething();
        Lib1Api2Impl24Core2 lib1api2impl24core2;
        lib1api2impl24core2.doSomething();
        Lib1Api2Impl25Api1 lib1api2impl25api1;
        lib1api2impl25api1.doSomething();
        Lib1Api2Impl25Api2 lib1api2impl25api2;
        lib1api2impl25api2.doSomething();
        Lib1Api2Impl25Api3 lib1api2impl25api3;
        lib1api2impl25api3.doSomething();
        visited = 1;
    }
}

