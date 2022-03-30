// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl33api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl33Api2" << std::endl;
        Lib3Core2Impl33Impl lib3core2impl33impl;
        lib3core2impl33impl.doSomething();
        Lib3Core2Impl34Api lib3core2impl34api;
        lib3core2impl34api.doSomething();
        visited = 1;
    }
}

