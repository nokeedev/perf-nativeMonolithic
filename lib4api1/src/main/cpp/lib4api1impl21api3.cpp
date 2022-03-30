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
int lib4api1impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api1impl21api34(int a, int b) {
    return a + b;
}

int Lib4Api1Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api1Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api1Impl21Api3" << std::endl;
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api1Impl21Impl lib4api1impl21impl;
        lib4api1impl21impl.doSomething();
        Lib4Api1Impl22Api1 lib4api1impl22api1;
        lib4api1impl22api1.doSomething();
        Lib4Api1Impl22Api2 lib4api1impl22api2;
        lib4api1impl22api2.doSomething();
        Lib4Api1Impl22Api3 lib4api1impl22api3;
        lib4api1impl22api3.doSomething();
        visited = 1;
    }
}

