// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl23api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl23Api2" << std::endl;
        Lib3Core2Impl23Impl lib3core2impl23impl;
        lib3core2impl23impl.doSomething();
        Lib3Core2Impl24Api1 lib3core2impl24api1;
        lib3core2impl24api1.doSomething();
        Lib3Core2Impl24Api2 lib3core2impl24api2;
        lib3core2impl24api2.doSomething();
        Lib3Core2Impl24Api3 lib3core2impl24api3;
        lib3core2impl24api3.doSomething();
        visited = 1;
    }
}

