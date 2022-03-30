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
int lib3api1impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl10impl4(int a, int b) {
    return a + b;
}

int Lib3Api1Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl10Impl" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl10Core1 lib3api1impl10core1;
        lib3api1impl10core1.doSomething();
        Lib3Api1Impl10Core2 lib3api1impl10core2;
        lib3api1impl10core2.doSomething();
        Lib3Api1Impl11Api1 lib3api1impl11api1;
        lib3api1impl11api1.doSomething();
        Lib3Api1Impl11Api2 lib3api1impl11api2;
        lib3api1impl11api2.doSomething();
        Lib3Api1Impl11Api3 lib3api1impl11api3;
        lib3api1impl11api3.doSomething();
        visited = 1;
    }
}

