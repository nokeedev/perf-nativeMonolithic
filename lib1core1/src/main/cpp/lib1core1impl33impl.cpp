// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl33impl4(int a, int b) {
    return a + b;
}

int Lib1Core1Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl33Impl" << std::endl;
        Lib1Core1Impl33Core lib1core1impl33core;
        lib1core1impl33core.doSomething();
        Lib1Core1Impl34Api lib1core1impl34api;
        lib1core1impl34api.doSomething();
        visited = 1;
    }
}

