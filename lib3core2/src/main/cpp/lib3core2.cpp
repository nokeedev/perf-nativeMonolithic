// GENERATED SOURCE FILE

#include "lib3core2_impl.h"
#include "lib3core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core24(int a, int b) {
    return a + b;
}

int Lib3Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2" << std::endl;
        Lib3Core2Impl1Api1 lib3core2impl1api1;
        lib3core2impl1api1.doSomething();
        Lib3Core2Impl1Api2 lib3core2impl1api2;
        lib3core2impl1api2.doSomething();
        Lib3Core2Impl1Api3 lib3core2impl1api3;
        lib3core2impl1api3.doSomething();
        visited = 1;
    }
}

