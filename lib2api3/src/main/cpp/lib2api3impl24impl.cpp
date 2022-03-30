// GENERATED SOURCE FILE

#include "lib2api3_private.h"
#include "lib2api3_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api3impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl24impl4(int a, int b) {
    return a + b;
}

int Lib2Api3Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3Impl24Impl" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api3Impl24Core1 lib2api3impl24core1;
        lib2api3impl24core1.doSomething();
        Lib2Api3Impl24Core2 lib2api3impl24core2;
        lib2api3impl24core2.doSomething();
        Lib2Api3Impl25Api1 lib2api3impl25api1;
        lib2api3impl25api1.doSomething();
        Lib2Api3Impl25Api2 lib2api3impl25api2;
        lib2api3impl25api2.doSomething();
        Lib2Api3Impl25Api3 lib2api3impl25api3;
        lib2api3impl25api3.doSomething();
        visited = 1;
    }
}

