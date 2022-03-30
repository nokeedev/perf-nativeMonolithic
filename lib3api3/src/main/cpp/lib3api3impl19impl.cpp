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
int lib3api3impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl19impl4(int a, int b) {
    return a + b;
}

int Lib3Api3Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl19Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl19Core1 lib3api3impl19core1;
        lib3api3impl19core1.doSomething();
        Lib3Api3Impl19Core2 lib3api3impl19core2;
        lib3api3impl19core2.doSomething();
        Lib3Api3Impl20Api1 lib3api3impl20api1;
        lib3api3impl20api1.doSomething();
        Lib3Api3Impl20Api2 lib3api3impl20api2;
        lib3api3impl20api2.doSomething();
        Lib3Api3Impl20Api3 lib3api3impl20api3;
        lib3api3impl20api3.doSomething();
        visited = 1;
    }
}

