// GENERATED SOURCE FILE

#include "lib2impl_private.h"
#include "lib2impl_impl.h"
#include "lib2core1.h"
#include "lib2core2.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2implimpl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl11api14(int a, int b) {
    return a + b;
}

int Lib2ImplImpl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl11Api1" << std::endl;
        Lib2Core1 lib2core1;
        lib2core1.doSomething();
        Lib2Core2 lib2core2;
        lib2core2.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2ImplImpl12Api1 lib2implimpl12api1;
        lib2implimpl12api1.doSomething();
        Lib2ImplImpl11Impl lib2implimpl11impl;
        lib2implimpl11impl.doSomething();
        Lib2ImplImpl12Api2 lib2implimpl12api2;
        lib2implimpl12api2.doSomething();
        Lib2ImplImpl12Api3 lib2implimpl12api3;
        lib2implimpl12api3.doSomething();
        visited = 1;
    }
}

