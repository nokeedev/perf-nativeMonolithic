// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl17api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl17Api1" << std::endl;
        Lib15Core2Impl18Api1 lib15core2impl18api1;
        lib15core2impl18api1.doSomething();
        Lib15Core2Impl17Impl lib15core2impl17impl;
        lib15core2impl17impl.doSomething();
        Lib15Core2Impl18Api2 lib15core2impl18api2;
        lib15core2impl18api2.doSomething();
        Lib15Core2Impl18Api3 lib15core2impl18api3;
        lib15core2impl18api3.doSomething();
        visited = 1;
    }
}

