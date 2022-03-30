// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl2impl4(int a, int b) {
    return a + b;
}

int Lib3Core1Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl2Impl" << std::endl;
        Lib3Core1Impl2Core1 lib3core1impl2core1;
        lib3core1impl2core1.doSomething();
        Lib3Core1Impl2Core2 lib3core1impl2core2;
        lib3core1impl2core2.doSomething();
        Lib3Core1Impl3Api1 lib3core1impl3api1;
        lib3core1impl3api1.doSomething();
        Lib3Core1Impl3Api2 lib3core1impl3api2;
        lib3core1impl3api2.doSomething();
        Lib3Core1Impl3Api3 lib3core1impl3api3;
        lib3core1impl3api3.doSomething();
        visited = 1;
    }
}

