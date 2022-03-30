// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl23api24(int a, int b) {
    return a + b;
}

int Lib3Core1Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl23Api2" << std::endl;
        Lib3Core1Impl23Impl lib3core1impl23impl;
        lib3core1impl23impl.doSomething();
        Lib3Core1Impl24Api1 lib3core1impl24api1;
        lib3core1impl24api1.doSomething();
        Lib3Core1Impl24Api2 lib3core1impl24api2;
        lib3core1impl24api2.doSomething();
        Lib3Core1Impl24Api3 lib3core1impl24api3;
        lib3core1impl24api3.doSomething();
        visited = 1;
    }
}

