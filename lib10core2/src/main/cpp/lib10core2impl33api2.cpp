// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl33api24(int a, int b) {
    return a + b;
}

int Lib10Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl33Api2" << std::endl;
        Lib10Core2Impl33Impl lib10core2impl33impl;
        lib10core2impl33impl.doSomething();
        Lib10Core2Impl34Api lib10core2impl34api;
        lib10core2impl34api.doSomething();
        visited = 1;
    }
}
