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
int lib3implimpl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl24api14(int a, int b) {
    return a + b;
}

int Lib3ImplImpl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3ImplImpl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3ImplImpl24Api1" << std::endl;
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
        Lib3ImplImpl25Api1 lib3implimpl25api1;
        lib3implimpl25api1.doSomething();
        Lib3ImplImpl24Impl lib3implimpl24impl;
        lib3implimpl24impl.doSomething();
        Lib3ImplImpl25Api2 lib3implimpl25api2;
        lib3implimpl25api2.doSomething();
        Lib3ImplImpl25Api3 lib3implimpl25api3;
        lib3implimpl25api3.doSomething();
        visited = 1;
    }
}

