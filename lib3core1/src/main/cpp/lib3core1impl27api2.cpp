// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl27api24(int a, int b) {
    return a + b;
}

int Lib3Core1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl27Api2" << std::endl;
        Lib3Core1Impl27Impl lib3core1impl27impl;
        lib3core1impl27impl.doSomething();
        Lib3Core1Impl28Api1 lib3core1impl28api1;
        lib3core1impl28api1.doSomething();
        Lib3Core1Impl28Api2 lib3core1impl28api2;
        lib3core1impl28api2.doSomething();
        Lib3Core1Impl28Api3 lib3core1impl28api3;
        lib3core1impl28api3.doSomething();
        visited = 1;
    }
}

