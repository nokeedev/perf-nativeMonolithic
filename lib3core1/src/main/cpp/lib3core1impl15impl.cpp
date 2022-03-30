// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl15impl4(int a, int b) {
    return a + b;
}

int Lib3Core1Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl15Impl" << std::endl;
        Lib3Core1Impl15Core1 lib3core1impl15core1;
        lib3core1impl15core1.doSomething();
        Lib3Core1Impl15Core2 lib3core1impl15core2;
        lib3core1impl15core2.doSomething();
        Lib3Core1Impl16Api1 lib3core1impl16api1;
        lib3core1impl16api1.doSomething();
        Lib3Core1Impl16Api2 lib3core1impl16api2;
        lib3core1impl16api2.doSomething();
        Lib3Core1Impl16Api3 lib3core1impl16api3;
        lib3core1impl16api3.doSomething();
        visited = 1;
    }
}

