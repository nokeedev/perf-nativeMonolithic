// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl24api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl24api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl24api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl24api34(int a, int b) {
    return a + b;
}

int Lib4Core2Impl24Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl24Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl24Api3" << std::endl;
        Lib4Core2Impl24Impl lib4core2impl24impl;
        lib4core2impl24impl.doSomething();
        Lib4Core2Impl25Api1 lib4core2impl25api1;
        lib4core2impl25api1.doSomething();
        Lib4Core2Impl25Api2 lib4core2impl25api2;
        lib4core2impl25api2.doSomething();
        Lib4Core2Impl25Api3 lib4core2impl25api3;
        lib4core2impl25api3.doSomething();
        visited = 1;
    }
}

