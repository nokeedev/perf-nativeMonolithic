// GENERATED SOURCE FILE

#include "lib4api3_private.h"
#include "lib4api3_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api3impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl12api24(int a, int b) {
    return a + b;
}

int Lib4Api3Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl12Api2" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl12Impl lib4api3impl12impl;
        lib4api3impl12impl.doSomething();
        Lib4Api3Impl13Api1 lib4api3impl13api1;
        lib4api3impl13api1.doSomething();
        Lib4Api3Impl13Api2 lib4api3impl13api2;
        lib4api3impl13api2.doSomething();
        Lib4Api3Impl13Api3 lib4api3impl13api3;
        lib4api3impl13api3.doSomething();
        visited = 1;
    }
}

