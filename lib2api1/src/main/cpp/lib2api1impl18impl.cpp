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
int lib2api1impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl18impl4(int a, int b) {
    return a + b;
}

int Lib2Api1Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl18Impl" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl18Core1 lib2api1impl18core1;
        lib2api1impl18core1.doSomething();
        Lib2Api1Impl18Core2 lib2api1impl18core2;
        lib2api1impl18core2.doSomething();
        Lib2Api1Impl19Api1 lib2api1impl19api1;
        lib2api1impl19api1.doSomething();
        Lib2Api1Impl19Api2 lib2api1impl19api2;
        lib2api1impl19api2.doSomething();
        Lib2Api1Impl19Api3 lib2api1impl19api3;
        lib2api1impl19api3.doSomething();
        visited = 1;
    }
}

