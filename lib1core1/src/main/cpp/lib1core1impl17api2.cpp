// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl17api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl17Api2" << std::endl;
        Lib1Core1Impl17Impl lib1core1impl17impl;
        lib1core1impl17impl.doSomething();
        Lib1Core1Impl18Api1 lib1core1impl18api1;
        lib1core1impl18api1.doSomething();
        Lib1Core1Impl18Api2 lib1core1impl18api2;
        lib1core1impl18api2.doSomething();
        Lib1Core1Impl18Api3 lib1core1impl18api3;
        lib1core1impl18api3.doSomething();
        visited = 1;
    }
}

