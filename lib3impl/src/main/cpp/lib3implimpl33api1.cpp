// GENERATED SOURCE FILE

#include "lib3impl_private.h"
#include "lib3impl_impl.h"
#include "lib3core1.h"
#include "lib3core2.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3implimpl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl33api14(int a, int b) {
    return a + b;
}

int Lib3ImplImpl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3ImplImpl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3ImplImpl33Api1" << std::endl;
        Lib3Core1 lib3core1;
        lib3core1.doSomething();
        Lib3Core2 lib3core2;
        lib3core2.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3ImplImpl34Api lib3implimpl34api;
        lib3implimpl34api.doSomething();
        Lib3ImplImpl33Impl lib3implimpl33impl;
        lib3implimpl33impl.doSomething();
        visited = 1;
    }
}

