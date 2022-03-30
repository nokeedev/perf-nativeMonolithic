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
int lib1implimpl5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl5api14(int a, int b) {
    return a + b;
}

int Lib1ImplImpl5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplImpl5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplImpl5Api1" << std::endl;
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
        Lib1ImplImpl6Api1 lib1implimpl6api1;
        lib1implimpl6api1.doSomething();
        Lib1ImplImpl5Impl lib1implimpl5impl;
        lib1implimpl5impl.doSomething();
        Lib1ImplImpl6Api2 lib1implimpl6api2;
        lib1implimpl6api2.doSomething();
        Lib1ImplImpl6Api3 lib1implimpl6api3;
        lib1implimpl6api3.doSomething();
        visited = 1;
    }
}

