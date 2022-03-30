// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl6impl4(int a, int b) {
    return a + b;
}

int Lib3Core2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl6Impl" << std::endl;
        Lib3Core2Impl6Core1 lib3core2impl6core1;
        lib3core2impl6core1.doSomething();
        Lib3Core2Impl6Core2 lib3core2impl6core2;
        lib3core2impl6core2.doSomething();
        Lib3Core2Impl7Api1 lib3core2impl7api1;
        lib3core2impl7api1.doSomething();
        Lib3Core2Impl7Api2 lib3core2impl7api2;
        lib3core2impl7api2.doSomething();
        Lib3Core2Impl7Api3 lib3core2impl7api3;
        lib3core2impl7api3.doSomething();
        visited = 1;
    }
}

