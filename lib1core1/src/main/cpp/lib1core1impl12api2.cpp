// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl12api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl12Api2" << std::endl;
        Lib1Core1Impl12Impl lib1core1impl12impl;
        lib1core1impl12impl.doSomething();
        Lib1Core1Impl13Api1 lib1core1impl13api1;
        lib1core1impl13api1.doSomething();
        Lib1Core1Impl13Api2 lib1core1impl13api2;
        lib1core1impl13api2.doSomething();
        Lib1Core1Impl13Api3 lib1core1impl13api3;
        lib1core1impl13api3.doSomething();
        visited = 1;
    }
}

