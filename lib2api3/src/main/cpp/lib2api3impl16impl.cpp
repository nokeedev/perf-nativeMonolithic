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
int lib2api3impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl16impl4(int a, int b) {
    return a + b;
}

int Lib2Api3Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3Impl16Impl" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api3Impl16Core1 lib2api3impl16core1;
        lib2api3impl16core1.doSomething();
        Lib2Api3Impl16Core2 lib2api3impl16core2;
        lib2api3impl16core2.doSomething();
        Lib2Api3Impl17Api1 lib2api3impl17api1;
        lib2api3impl17api1.doSomething();
        Lib2Api3Impl17Api2 lib2api3impl17api2;
        lib2api3impl17api2.doSomething();
        Lib2Api3Impl17Api3 lib2api3impl17api3;
        lib2api3impl17api3.doSomething();
        visited = 1;
    }
}

