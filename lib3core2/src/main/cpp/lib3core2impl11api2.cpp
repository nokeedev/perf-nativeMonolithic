// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl11api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl11api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl11api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl11api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl11Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl11Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl11Api2" << std::endl;
        Lib3Core2Impl11Impl lib3core2impl11impl;
        lib3core2impl11impl.doSomething();
        Lib3Core2Impl12Api1 lib3core2impl12api1;
        lib3core2impl12api1.doSomething();
        Lib3Core2Impl12Api2 lib3core2impl12api2;
        lib3core2impl12api2.doSomething();
        Lib3Core2Impl12Api3 lib3core2impl12api3;
        lib3core2impl12api3.doSomething();
        visited = 1;
    }
}

