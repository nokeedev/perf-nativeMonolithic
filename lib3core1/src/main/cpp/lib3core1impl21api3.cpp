// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl21api34(int a, int b) {
    return a + b;
}

int Lib3Core1Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl21Api3" << std::endl;
        Lib3Core1Impl21Impl lib3core1impl21impl;
        lib3core1impl21impl.doSomething();
        Lib3Core1Impl22Api1 lib3core1impl22api1;
        lib3core1impl22api1.doSomething();
        Lib3Core1Impl22Api2 lib3core1impl22api2;
        lib3core1impl22api2.doSomething();
        Lib3Core1Impl22Api3 lib3core1impl22api3;
        lib3core1impl22api3.doSomething();
        visited = 1;
    }
}

