// GENERATED SOURCE FILE

#include "lib3api1_private.h"
#include "lib3api1_impl.h"
#include "lib4api1.h"
#include "lib3impl.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api1impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl5api24(int a, int b) {
    return a + b;
}

int Lib3Api1Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl5Api2" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl5Impl lib3api1impl5impl;
        lib3api1impl5impl.doSomething();
        Lib3Api1Impl6Api1 lib3api1impl6api1;
        lib3api1impl6api1.doSomething();
        Lib3Api1Impl6Api2 lib3api1impl6api2;
        lib3api1impl6api2.doSomething();
        Lib3Api1Impl6Api3 lib3api1impl6api3;
        lib3api1impl6api3.doSomething();
        visited = 1;
    }
}

