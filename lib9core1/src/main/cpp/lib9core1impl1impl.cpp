// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl1impl4(int a, int b) {
    return a + b;
}

int Lib9Core1Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl1Impl" << std::endl;
        Lib9Core1Impl1Core1 lib9core1impl1core1;
        lib9core1impl1core1.doSomething();
        Lib9Core1Impl1Core2 lib9core1impl1core2;
        lib9core1impl1core2.doSomething();
        Lib9Core1Impl2Api1 lib9core1impl2api1;
        lib9core1impl2api1.doSomething();
        Lib9Core1Impl2Api2 lib9core1impl2api2;
        lib9core1impl2api2.doSomething();
        Lib9Core1Impl2Api3 lib9core1impl2api3;
        lib9core1impl2api3.doSomething();
        visited = 1;
    }
}

