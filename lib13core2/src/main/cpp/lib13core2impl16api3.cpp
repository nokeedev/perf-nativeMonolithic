// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl16api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl16api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl16api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl16api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl16Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl16Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl16Api3" << std::endl;
        Lib13Core2Impl16Impl lib13core2impl16impl;
        lib13core2impl16impl.doSomething();
        Lib13Core2Impl17Api1 lib13core2impl17api1;
        lib13core2impl17api1.doSomething();
        Lib13Core2Impl17Api2 lib13core2impl17api2;
        lib13core2impl17api2.doSomething();
        Lib13Core2Impl17Api3 lib13core2impl17api3;
        lib13core2impl17api3.doSomething();
        visited = 1;
    }
}

