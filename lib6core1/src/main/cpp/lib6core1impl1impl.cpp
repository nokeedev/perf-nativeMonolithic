// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl1impl4(int a, int b) {
    return a + b;
}

int Lib6Core1Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl1Impl" << std::endl;
        Lib6Core1Impl1Core1 lib6core1impl1core1;
        lib6core1impl1core1.doSomething();
        Lib6Core1Impl1Core2 lib6core1impl1core2;
        lib6core1impl1core2.doSomething();
        Lib6Core1Impl2Api1 lib6core1impl2api1;
        lib6core1impl2api1.doSomething();
        Lib6Core1Impl2Api2 lib6core1impl2api2;
        lib6core1impl2api2.doSomething();
        Lib6Core1Impl2Api3 lib6core1impl2api3;
        lib6core1impl2api3.doSomething();
        visited = 1;
    }
}

