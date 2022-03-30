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
int lib3api3impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl18impl4(int a, int b) {
    return a + b;
}

int Lib3Api3Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl18Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl18Core1 lib3api3impl18core1;
        lib3api3impl18core1.doSomething();
        Lib3Api3Impl18Core2 lib3api3impl18core2;
        lib3api3impl18core2.doSomething();
        Lib3Api3Impl19Api1 lib3api3impl19api1;
        lib3api3impl19api1.doSomething();
        Lib3Api3Impl19Api2 lib3api3impl19api2;
        lib3api3impl19api2.doSomething();
        Lib3Api3Impl19Api3 lib3api3impl19api3;
        lib3api3impl19api3.doSomething();
        visited = 1;
    }
}

