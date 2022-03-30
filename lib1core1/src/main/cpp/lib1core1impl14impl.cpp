// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl14impl4(int a, int b) {
    return a + b;
}

int Lib1Core1Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl14Impl" << std::endl;
        Lib1Core1Impl14Core1 lib1core1impl14core1;
        lib1core1impl14core1.doSomething();
        Lib1Core1Impl14Core2 lib1core1impl14core2;
        lib1core1impl14core2.doSomething();
        Lib1Core1Impl15Api1 lib1core1impl15api1;
        lib1core1impl15api1.doSomething();
        Lib1Core1Impl15Api2 lib1core1impl15api2;
        lib1core1impl15api2.doSomething();
        Lib1Core1Impl15Api3 lib1core1impl15api3;
        lib1core1impl15api3.doSomething();
        visited = 1;
    }
}

