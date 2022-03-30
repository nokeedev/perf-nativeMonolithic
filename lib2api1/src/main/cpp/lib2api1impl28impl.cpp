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
int lib2api1impl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api1impl28impl4(int a, int b) {
    return a + b;
}

int Lib2Api1Impl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1Impl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1Impl28Impl" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api1Impl28Core1 lib2api1impl28core1;
        lib2api1impl28core1.doSomething();
        Lib2Api1Impl28Core2 lib2api1impl28core2;
        lib2api1impl28core2.doSomething();
        Lib2Api1Impl29Api1 lib2api1impl29api1;
        lib2api1impl29api1.doSomething();
        Lib2Api1Impl29Api2 lib2api1impl29api2;
        lib2api1impl29api2.doSomething();
        Lib2Api1Impl29Api3 lib2api1impl29api3;
        lib2api1impl29api3.doSomething();
        visited = 1;
    }
}

