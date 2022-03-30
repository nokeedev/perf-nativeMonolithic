// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl16api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl16api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl16api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl16api34(int a, int b) {
    return a + b;
}

int Lib2Core1Impl16Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl16Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl16Api3" << std::endl;
        Lib2Core1Impl16Impl lib2core1impl16impl;
        lib2core1impl16impl.doSomething();
        Lib2Core1Impl17Api1 lib2core1impl17api1;
        lib2core1impl17api1.doSomething();
        Lib2Core1Impl17Api2 lib2core1impl17api2;
        lib2core1impl17api2.doSomething();
        Lib2Core1Impl17Api3 lib2core1impl17api3;
        lib2core1impl17api3.doSomething();
        visited = 1;
    }
}

