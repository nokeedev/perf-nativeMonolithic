// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl28api24(int a, int b) {
    return a + b;
}

int Lib3Core1Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl28Api2" << std::endl;
        Lib3Core1Impl28Impl lib3core1impl28impl;
        lib3core1impl28impl.doSomething();
        Lib3Core1Impl29Api1 lib3core1impl29api1;
        lib3core1impl29api1.doSomething();
        Lib3Core1Impl29Api2 lib3core1impl29api2;
        lib3core1impl29api2.doSomething();
        Lib3Core1Impl29Api3 lib3core1impl29api3;
        lib3core1impl29api3.doSomething();
        visited = 1;
    }
}

