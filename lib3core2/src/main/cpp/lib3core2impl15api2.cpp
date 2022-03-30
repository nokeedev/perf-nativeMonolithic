// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl15api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl15Api2" << std::endl;
        Lib3Core2Impl15Impl lib3core2impl15impl;
        lib3core2impl15impl.doSomething();
        Lib3Core2Impl16Api1 lib3core2impl16api1;
        lib3core2impl16api1.doSomething();
        Lib3Core2Impl16Api2 lib3core2impl16api2;
        lib3core2impl16api2.doSomething();
        Lib3Core2Impl16Api3 lib3core2impl16api3;
        lib3core2impl16api3.doSomething();
        visited = 1;
    }
}

