// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl21impl4(int a, int b) {
    return a + b;
}

int Lib11Core1Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl21Impl" << std::endl;
        Lib11Core1Impl21Core1 lib11core1impl21core1;
        lib11core1impl21core1.doSomething();
        Lib11Core1Impl21Core2 lib11core1impl21core2;
        lib11core1impl21core2.doSomething();
        Lib11Core1Impl22Api1 lib11core1impl22api1;
        lib11core1impl22api1.doSomething();
        Lib11Core1Impl22Api2 lib11core1impl22api2;
        lib11core1impl22api2.doSomething();
        Lib11Core1Impl22Api3 lib11core1impl22api3;
        lib11core1impl22api3.doSomething();
        visited = 1;
    }
}

