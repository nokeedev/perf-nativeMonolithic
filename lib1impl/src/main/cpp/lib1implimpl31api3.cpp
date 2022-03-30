// GENERATED SOURCE FILE

#include "lib1impl_private.h"
#include "lib1impl_impl.h"
#include "lib1core1.h"
#include "lib1core2.h"
#include "lib2api1.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1implimpl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl31api34(int a, int b) {
    return a + b;
}

int Lib1ImplImpl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplImpl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplImpl31Api3" << std::endl;
        Lib1Core1 lib1core1;
        lib1core1.doSomething();
        Lib1Core2 lib1core2;
        lib1core2.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1ImplImpl31Impl lib1implimpl31impl;
        lib1implimpl31impl.doSomething();
        Lib1ImplImpl32Api1 lib1implimpl32api1;
        lib1implimpl32api1.doSomething();
        Lib1ImplImpl32Api2 lib1implimpl32api2;
        lib1implimpl32api2.doSomething();
        Lib1ImplImpl32Api3 lib1implimpl32api3;
        lib1implimpl32api3.doSomething();
        visited = 1;
    }
}

