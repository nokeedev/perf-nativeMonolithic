// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl33api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl33Api1" << std::endl;
        Lib1Core2Impl34Api lib1core2impl34api;
        lib1core2impl34api.doSomething();
        Lib1Core2Impl33Impl lib1core2impl33impl;
        lib1core2impl33impl.doSomething();
        visited = 1;
    }
}

