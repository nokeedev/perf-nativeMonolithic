// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl16api24(int a, int b) {
    return a + b;
}

int Lib3Core1Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl16Api2" << std::endl;
        Lib3Core1Impl16Impl lib3core1impl16impl;
        lib3core1impl16impl.doSomething();
        Lib3Core1Impl17Api1 lib3core1impl17api1;
        lib3core1impl17api1.doSomething();
        Lib3Core1Impl17Api2 lib3core1impl17api2;
        lib3core1impl17api2.doSomething();
        Lib3Core1Impl17Api3 lib3core1impl17api3;
        lib3core1impl17api3.doSomething();
        visited = 1;
    }
}

