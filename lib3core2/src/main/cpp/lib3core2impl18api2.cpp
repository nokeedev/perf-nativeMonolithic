// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl18api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl18Api2" << std::endl;
        Lib3Core2Impl18Impl lib3core2impl18impl;
        lib3core2impl18impl.doSomething();
        Lib3Core2Impl19Api1 lib3core2impl19api1;
        lib3core2impl19api1.doSomething();
        Lib3Core2Impl19Api2 lib3core2impl19api2;
        lib3core2impl19api2.doSomething();
        Lib3Core2Impl19Api3 lib3core2impl19api3;
        lib3core2impl19api3.doSomething();
        visited = 1;
    }
}

