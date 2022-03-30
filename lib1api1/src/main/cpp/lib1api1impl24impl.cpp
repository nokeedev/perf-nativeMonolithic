// GENERATED SOURCE FILE

#include "lib1api1_private.h"
#include "lib1api1_impl.h"
#include "lib2api1.h"
#include "lib1impl.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api1impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl24impl4(int a, int b) {
    return a + b;
}

int Lib1Api1Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl24Impl" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl24Core1 lib1api1impl24core1;
        lib1api1impl24core1.doSomething();
        Lib1Api1Impl24Core2 lib1api1impl24core2;
        lib1api1impl24core2.doSomething();
        Lib1Api1Impl25Api1 lib1api1impl25api1;
        lib1api1impl25api1.doSomething();
        Lib1Api1Impl25Api2 lib1api1impl25api2;
        lib1api1impl25api2.doSomething();
        Lib1Api1Impl25Api3 lib1api1impl25api3;
        lib1api1impl25api3.doSomething();
        visited = 1;
    }
}

