// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl34api4(int a, int b) {
    return a + b;
}

int Lib3Core2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl34Api" << std::endl;
        Lib3Core2Impl34Core lib3core2impl34core;
        lib3core2impl34core.doSomething();
        visited = 1;
    }
}

