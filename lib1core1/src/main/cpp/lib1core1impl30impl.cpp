// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl30impl4(int a, int b) {
    return a + b;
}

int Lib1Core1Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl30Impl" << std::endl;
        Lib1Core1Impl30Core1 lib1core1impl30core1;
        lib1core1impl30core1.doSomething();
        Lib1Core1Impl30Core2 lib1core1impl30core2;
        lib1core1impl30core2.doSomething();
        Lib1Core1Impl31Api1 lib1core1impl31api1;
        lib1core1impl31api1.doSomething();
        Lib1Core1Impl31Api2 lib1core1impl31api2;
        lib1core1impl31api2.doSomething();
        Lib1Core1Impl31Api3 lib1core1impl31api3;
        lib1core1impl31api3.doSomething();
        visited = 1;
    }
}

