// GENERATED SOURCE FILE

#include "lib4api1_private.h"
#include "lib4api1_impl.h"
#include "lib5api1.h"
#include "lib4impl.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api1impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl12api34(int a, int b) {
    return a + b;
}

int Lib4Api1Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl12Api3" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl12Impl lib4api1impl12impl;
        lib4api1impl12impl.doSomething();
        Lib4Api1Impl13Api1 lib4api1impl13api1;
        lib4api1impl13api1.doSomething();
        Lib4Api1Impl13Api2 lib4api1impl13api2;
        lib4api1impl13api2.doSomething();
        Lib4Api1Impl13Api3 lib4api1impl13api3;
        lib4api1impl13api3.doSomething();
        visited = 1;
    }
}

