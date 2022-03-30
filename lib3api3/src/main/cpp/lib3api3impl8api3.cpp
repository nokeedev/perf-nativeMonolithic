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
int lib3api3impl8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api3impl8api34(int a, int b) {
    return a + b;
}

int Lib3Api3Impl8Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3Impl8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3Impl8Api3" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api3Impl8Impl lib3api3impl8impl;
        lib3api3impl8impl.doSomething();
        Lib3Api3Impl9Api1 lib3api3impl9api1;
        lib3api3impl9api1.doSomething();
        Lib3Api3Impl9Api2 lib3api3impl9api2;
        lib3api3impl9api2.doSomething();
        Lib3Api3Impl9Api3 lib3api3impl9api3;
        lib3api3impl9api3.doSomething();
        visited = 1;
    }
}

