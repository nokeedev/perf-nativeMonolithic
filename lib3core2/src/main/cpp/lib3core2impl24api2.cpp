// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl24api24(int a, int b) {
    return a + b;
}

int Lib3Core2Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl24Api2" << std::endl;
        Lib3Core2Impl24Impl lib3core2impl24impl;
        lib3core2impl24impl.doSomething();
        Lib3Core2Impl25Api1 lib3core2impl25api1;
        lib3core2impl25api1.doSomething();
        Lib3Core2Impl25Api2 lib3core2impl25api2;
        lib3core2impl25api2.doSomething();
        Lib3Core2Impl25Api3 lib3core2impl25api3;
        lib3core2impl25api3.doSomething();
        visited = 1;
    }
}

