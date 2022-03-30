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
int lib3api3impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl30api24(int a, int b) {
    return a + b;
}

int Lib3Api3Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl30Api2" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl30Impl lib3api3impl30impl;
        lib3api3impl30impl.doSomething();
        Lib3Api3Impl31Api1 lib3api3impl31api1;
        lib3api3impl31api1.doSomething();
        Lib3Api3Impl31Api2 lib3api3impl31api2;
        lib3api3impl31api2.doSomething();
        Lib3Api3Impl31Api3 lib3api3impl31api3;
        lib3api3impl31api3.doSomething();
        visited = 1;
    }
}

