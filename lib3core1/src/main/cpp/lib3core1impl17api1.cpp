// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl17api14(int a, int b) {
    return a + b;
}

int Lib3Core1Impl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl17Api1" << std::endl;
        Lib3Core1Impl18Api1 lib3core1impl18api1;
        lib3core1impl18api1.doSomething();
        Lib3Core1Impl17Impl lib3core1impl17impl;
        lib3core1impl17impl.doSomething();
        Lib3Core1Impl18Api2 lib3core1impl18api2;
        lib3core1impl18api2.doSomething();
        Lib3Core1Impl18Api3 lib3core1impl18api3;
        lib3core1impl18api3.doSomething();
        visited = 1;
    }
}

