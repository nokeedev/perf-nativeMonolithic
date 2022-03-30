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
int lib3api1impl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl13api34(int a, int b) {
    return a + b;
}

int Lib3Api1Impl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl13Api3" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl13Impl lib3api1impl13impl;
        lib3api1impl13impl.doSomething();
        Lib3Api1Impl14Api1 lib3api1impl14api1;
        lib3api1impl14api1.doSomething();
        Lib3Api1Impl14Api2 lib3api1impl14api2;
        lib3api1impl14api2.doSomething();
        Lib3Api1Impl14Api3 lib3api1impl14api3;
        lib3api1impl14api3.doSomething();
        visited = 1;
    }
}

