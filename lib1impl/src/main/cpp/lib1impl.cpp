// GENERATED SOURCE FILE

#include "lib1impl_impl.h"
#include "lib1impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1impl4(int a, int b) {
    return a + b;
}

int Lib1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Impl" << std::endl;
        Lib1ImplImpl1Api1 lib1implimpl1api1;
        lib1implimpl1api1.doSomething();
        Lib1ImplImpl1Api2 lib1implimpl1api2;
        lib1implimpl1api2.doSomething();
        Lib1ImplImpl1Api3 lib1implimpl1api3;
        lib1implimpl1api3.doSomething();
        visited = 1;
    }
}

