// GENERATED SOURCE FILE

#include "lib9impl_impl.h"
#include "lib9impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9impl4(int a, int b) {
    return a + b;
}

int Lib9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Impl" << std::endl;
        Lib9ImplImpl1Api1 lib9implimpl1api1;
        lib9implimpl1api1.doSomething();
        Lib9ImplImpl1Api2 lib9implimpl1api2;
        lib9implimpl1api2.doSomething();
        Lib9ImplImpl1Api3 lib9implimpl1api3;
        lib9implimpl1api3.doSomething();
        visited = 1;
    }
}

