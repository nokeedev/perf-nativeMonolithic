// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl12api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl12Api2" << std::endl;
        Lib3Core2Impl12Impl lib3core2impl12impl;
        lib3core2impl12impl.doSomething();
        Lib3Core2Impl13Api1 lib3core2impl13api1;
        lib3core2impl13api1.doSomething();
        Lib3Core2Impl13Api2 lib3core2impl13api2;
        lib3core2impl13api2.doSomething();
        Lib3Core2Impl13Api3 lib3core2impl13api3;
        lib3core2impl13api3.doSomething();
        visited = 1;
    }
}

