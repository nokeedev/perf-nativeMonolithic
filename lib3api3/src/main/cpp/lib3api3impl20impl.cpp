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
int lib3api3impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl20impl4(int a, int b) {
    return a + b;
}

int Lib3Api3Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl20Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl20Core1 lib3api3impl20core1;
        lib3api3impl20core1.doSomething();
        Lib3Api3Impl20Core2 lib3api3impl20core2;
        lib3api3impl20core2.doSomething();
        Lib3Api3Impl21Api1 lib3api3impl21api1;
        lib3api3impl21api1.doSomething();
        Lib3Api3Impl21Api2 lib3api3impl21api2;
        lib3api3impl21api2.doSomething();
        Lib3Api3Impl21Api3 lib3api3impl21api3;
        lib3api3impl21api3.doSomething();
        visited = 1;
    }
}

