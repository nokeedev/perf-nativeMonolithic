// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib3Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl25Impl" << std::endl;
        Lib3Core2Impl25Core1 lib3core2impl25core1;
        lib3core2impl25core1.doSomething();
        Lib3Core2Impl25Core2 lib3core2impl25core2;
        lib3core2impl25core2.doSomething();
        Lib3Core2Impl26Api1 lib3core2impl26api1;
        lib3core2impl26api1.doSomething();
        Lib3Core2Impl26Api2 lib3core2impl26api2;
        lib3core2impl26api2.doSomething();
        Lib3Core2Impl26Api3 lib3core2impl26api3;
        lib3core2impl26api3.doSomething();
        visited = 1;
    }
}

