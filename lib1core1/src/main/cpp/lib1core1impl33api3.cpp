// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl33api34(int a, int b) {
    return a + b;
}

int Lib1Core1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl33Api3" << std::endl;
        Lib1Core1Impl33Impl lib1core1impl33impl;
        lib1core1impl33impl.doSomething();
        Lib1Core1Impl34Api lib1core1impl34api;
        lib1core1impl34api.doSomething();
        visited = 1;
    }
}

