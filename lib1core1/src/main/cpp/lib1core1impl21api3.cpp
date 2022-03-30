// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl21api34(int a, int b) {
    return a + b;
}

int Lib1Core1Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl21Api3" << std::endl;
        Lib1Core1Impl21Impl lib1core1impl21impl;
        lib1core1impl21impl.doSomething();
        Lib1Core1Impl22Api1 lib1core1impl22api1;
        lib1core1impl22api1.doSomething();
        Lib1Core1Impl22Api2 lib1core1impl22api2;
        lib1core1impl22api2.doSomething();
        Lib1Core1Impl22Api3 lib1core1impl22api3;
        lib1core1impl22api3.doSomething();
        visited = 1;
    }
}

