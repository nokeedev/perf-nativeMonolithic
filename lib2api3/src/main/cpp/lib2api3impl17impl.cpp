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
int lib2api3impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api3impl17impl4(int a, int b) {
    return a + b;
}

int Lib2Api3Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api3Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api3Impl17Impl" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api3Impl17Core1 lib2api3impl17core1;
        lib2api3impl17core1.doSomething();
        Lib2Api3Impl17Core2 lib2api3impl17core2;
        lib2api3impl17core2.doSomething();
        Lib2Api3Impl18Api1 lib2api3impl18api1;
        lib2api3impl18api1.doSomething();
        Lib2Api3Impl18Api2 lib2api3impl18api2;
        lib2api3impl18api2.doSomething();
        Lib2Api3Impl18Api3 lib2api3impl18api3;
        lib2api3impl18api3.doSomething();
        visited = 1;
    }
}

