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
int lib1implimpl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl4api14(int a, int b) {
    return a + b;
}

int Lib1ImplImpl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplImpl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplImpl4Api1" << std::endl;
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
        Lib1ImplImpl5Api1 lib1implimpl5api1;
        lib1implimpl5api1.doSomething();
        Lib1ImplImpl4Impl lib1implimpl4impl;
        lib1implimpl4impl.doSomething();
        Lib1ImplImpl5Api2 lib1implimpl5api2;
        lib1implimpl5api2.doSomething();
        Lib1ImplImpl5Api3 lib1implimpl5api3;
        lib1implimpl5api3.doSomething();
        visited = 1;
    }
}

